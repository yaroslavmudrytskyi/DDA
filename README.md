# FORTLS
![license](https://img.shields.io/badge/Licence-GPL--3-blue.svg)
[![](https://www.r-pkg.org/badges/version/FORTLS)](https://CRAN.R-project.org/package=FORTLS)
[![DOI](https://zenodo.org/badge/DOI/10.3390/IECF2020-08066.svg)](https://doi.org/10.3390/IECF2020-08066)

## Automatic Processing of TLS Point Cloud Data for Forestry Purposes
Process automation of Terrestrial Laser Scanner (TLS) point cloud data derived from single
scans. 'FORTLS' enables (i) detection of trees and estimation of diameter
at breast height (dbh), (ii) estimation of some stand variables (e.g. density,
basal area, mean and dominant height), (iii) computation of metrics related to important forest
attributes estimated in Forest Inventories (FIs) at stand level and (iv) optimization of plot design
for combining TLS data and field measured data. Documentation about 'FORTLS' is described
in Molina-Valero et al. (2020, <https://doi.org/10.3390/IECF2020-08066>).

# Install `FORTLS 1.2.0` (Beta version)

Get the latest released version of FORTLS from GitHub (included in the devel branch)

```r
remotes::install_github("Molina-Valero/FORTLS", ref = "devel", dependencies = TRUE)
```


## Normalize

This function obtains coordinates relative to the plot centre for Terrestrial Laser Scanner (TLS) and SLAM point clouds (supplied as LAS files) derived from single and multiple scans. 

```r
# Establishment of working directories (optional)
# By default here we propose the current working directory of the R process

dir.data <- getwd()
dir.result <- getwd()

# Loading example data (LAS file) to dir.data

download.file("https://www.dropbox.com/s/2c3d320o3srcawb/1.las?raw=1", destfile = file.path(dir.data, "1.las"), mode = "wb")

# Normalizing the whole point cloud data without considering arguments

pcd <- normalize(las = "1.las", dir.data = dir.data, dir.result = dir.result)
```
