#' Generate configuration for Mack bootstrap simulations.
#'
#' FUNCTION_DESCRIPTION
#'
#' @param ndev DESCRIPTION.
#' @param factors DESCRIPTION.
#' @param resids.type DESCRIPTION.
#' @param boot.type DESCRIPTION.
#' @param dist DESCRIPTION.
#' @param type DESCRIPTION.
#'
#' @return RETURN_DESCRIPTION
#' @examples
#' # ADD_EXAMPLES_HERE
mackConfig <- function(ndev,
    factors,
    resids.type = c("raw", "scaled", "parametric"),
    boot.type = c("conditional", "unconditional"),
    dist = c("normal", "gamma"),
    type = "single") {

    if (type == "single") {

        npts <- (ndev ** 2 - ndev) / 2  # First column can't be outlier.
        outlier.points <- matrix(rep(0, 2 * npts), ncol = 2)
        k <- 1
        for (i in seq_len(ndev - 1)) {
            for (j in seq(2, ndev + 1 - i)) {
                outlier.points[k, ] <- c(i, j)
                k <- k + 1
            }
        }

        excl.points <- outlier.points

        indices <- do.call(expand.grid,
            list(
                seq_len(nrow(outlier.points)),
                seq_along(factors),
                seq_len(nrow(excl.points)),
                seq_along(resids.type),
                seq_along(boot.type),
                seq_along(dist)
            ))


        config <- do.call(cbind.data.frame, 
            list(
                outlier.points[indices[, 1], ],
                factors[indices[, 2]],
                excl.points[indices[, 3], ],
                resids.type[indices[, 4]],
                boot.type[indices[, 5]],
                dist[indices[, 6]]
            ))

        config <- data.table::as.data.table(config)

        names(config) <- c("outlier.rowidx", "outlier.colidx", "factor", "excl.rowidx", "excl.colidx", "resids.type", "boot.type", "dist")

        return(config)

    } else if (type == "calendar" || type == "origin") {

        excl.diags <- outlier.diags <- seq_len(ndev - 1)

        indices <- do.call(expand.grid,
            list(
                seq_along(outlier.diags),
                seq_along(excl.diags),
                seq_along(factors),
                seq_along(resids.type),
                seq_along(boot.type),
                seq_along(dist)
            ))


        config <- do.call(cbind.data.frame, 
            list(
                outlier.diags[indices[, 1]],
                factors[indices[, 2]],
                excl.diags[indices[, 3]],
                resids.type[indices[, 4]],
                boot.type[indices[, 5]],
                dist[indices[, 6]]
            ))

        config <- data.table::as.data.table(config)

        names(config) <- c("outlier.diagidx", "factor", "excl.diagidx", "resids.type", "boot.type", "dist")

        return(config)
    }
}