-- phpMyAdmin SQL Dump
-- version 4.5.1
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Jan 16, 2017 at 07:49 PM
-- Server version: 10.1.19-MariaDB
-- PHP Version: 5.6.28

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `database`
--

-- --------------------------------------------------------

--
-- Table structure for table `aerosinodoi`
--

CREATE TABLE `aerosinodoi` (
  `id` int(11) NOT NULL,
  `empid` varchar(45) NOT NULL,
  `years` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `aerosinodoi`
--

INSERT INTO `aerosinodoi` (`id`, `empid`, `years`) VALUES
(1, '18', 12),
(2, '19', 15),
(3, '28', 14),
(4, '29', 12);

-- --------------------------------------------------------

--
-- Table structure for table `company`
--

CREATE TABLE `company` (
  `id` int(11) NOT NULL,
  `fname` varchar(45) NOT NULL,
  `lname` varchar(45) NOT NULL,
  `number` varchar(45) NOT NULL,
  `address` varchar(45) NOT NULL,
  `username` varchar(45) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `company`
--

INSERT INTO `company` (`id`, `fname`, `lname`, `number`, `address`, `username`) VALUES
(10, 'stathis', 'kritikos', '6984502753', 'sitia', 'stathis'),
(11, 'eqrffs', 'edagrvf', '12', 'wetgv', 'qw');

-- --------------------------------------------------------

--
-- Table structure for table `customers`
--

CREATE TABLE `customers` (
  `id` int(11) NOT NULL,
  `fname` varchar(45) NOT NULL,
  `lname` varchar(45) NOT NULL,
  `number` varchar(45) NOT NULL,
  `address` varchar(45) NOT NULL,
  `username` varchar(45) NOT NULL,
  `online` int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `customers`
--

INSERT INTO `customers` (`id`, `fname`, `lname`, `number`, `address`, `username`, `online`) VALUES
(14, 'asd', 'asd', 'asd', 'sd', 'admin', 0),
(15, 'ddsf', 'sdfsdf', 'sdfsd', 'sdf', 'nikos258', 0),
(17, 'nikos', 'papatheodorou', '281011123', 'koskinou', 'nick', 0),
(18, 'ert', 'ert', '123456789', 'edw', 'tp4158', 0),
(19, 'anna', 'papadaki', '6988989898', 'hrakleio', 'anna', 0),
(20, 'kwstas', 'bidakhs', '52649+8456156', 'ierapetra', 'kwstas', 0),
(21, 'savvas', 'papatheodorou', '28102147896', 'rodos', 'savvas', 0),
(22, 'xrhstos', 'toutoum', '6549816534984', 'xania', 'xrhstos', 0);

-- --------------------------------------------------------

--
-- Table structure for table `dioikitiki`
--

CREATE TABLE `dioikitiki` (
  `id` int(11) NOT NULL,
  `empid` varchar(45) NOT NULL,
  `gram` varchar(45) NOT NULL,
  `years` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `dioikitiki`
--

INSERT INTO `dioikitiki` (`id`, `empid`, `gram`, `years`) VALUES
(9, '20', 'epp', 2),
(10, '21', 'eppteikrhths', 1);

-- --------------------------------------------------------

--
-- Table structure for table `employees`
--

CREATE TABLE `employees` (
  `id` int(11) NOT NULL,
  `fname` varchar(45) NOT NULL,
  `lname` varchar(45) NOT NULL,
  `idnum` varchar(45) NOT NULL,
  `phonenum` varchar(45) NOT NULL,
  `address` varchar(45) NOT NULL,
  `bday` varchar(45) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `employees`
--

INSERT INTO `employees` (`id`, `fname`, `lname`, `idnum`, `phonenum`, `address`, `bday`) VALUES
(18, 'stathis', 'kritikos', '123', '2840258796', 'edw', '18/12/1980'),
(19, 'nikos', 'papatheodorou', '147', '56498546', 'rodos', '29/1/1982'),
(20, 'aggelos', 'pastrikos', '369', '685498654', 'rethimno', '29/1/1998'),
(21, 'giwrgos', 'iwannidhs', '7856', '65465341879', 'athens', '25/5/1996'),
(22, 'savvas', 'etfg', '56', '465', 'rtghb', '4/7/1980'),
(23, 'louiza', 'tsagarakh', '78963', '65165', 'agios', '17/8/1978'),
(24, 'anna', 'anna', '12345', '69874521477854', 'ierapetra', '23/11/1985'),
(25, 'maria', 'bidaki', '77841218', '32197812316545', 'agionikolao', '26/7/1991'),
(26, 'dwra', 'dwra', '098765', '65564', 'xania', '26/7/1991'),
(27, 'stathis', 'kriti', '324563467375', '673657', 'esw', '26/11/1960'),
(28, 'dhmhtrhs', 'aka', '651', '89898', 'edwa', '15/12/1980'),
(29, 'savvas', 'pastrikos', '78963214', '654654987', 'qas', '15/7/1987');

-- --------------------------------------------------------

--
-- Table structure for table `pilotoi`
--

CREATE TABLE `pilotoi` (
  `id` int(11) NOT NULL,
  `empid` varchar(45) NOT NULL,
  `flyhours` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `pilotoi`
--

INSERT INTO `pilotoi` (`id`, `empid`, `flyhours`) VALUES
(1, '22', 0),
(2, '23', 0),
(3, '24', 0),
(4, '25', 0),
(5, '26', 0),
(6, '27', 0);

-- --------------------------------------------------------

--
-- Table structure for table `route`
--

CREATE TABLE `route` (
  `id` int(11) NOT NULL,
  `rcode` varchar(45) NOT NULL,
  `spoint` varchar(45) NOT NULL,
  `epoint` varchar(45) NOT NULL,
  `rday` varchar(45) NOT NULL,
  `shour` varchar(45) NOT NULL,
  `ehour` varchar(45) NOT NULL,
  `ticketpric` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `route`
--

INSERT INTO `route` (`id`, `rcode`, `spoint`, `epoint`, `rday`, `shour`, `ehour`, `ticketpric`) VALUES
(7, 'AS1020', 'ATHINA', 'ZAKYNTHOS', 'DEUTERA', '5:00', '6:00', 125),
(9, 'AS14789', 'IRAKLIO', 'ATHINA', 'DEUTERA', '20:00', '20:45', 74),
(10, 'AS789654', 'ALEKSANDROUPOLI', 'NAXOS', 'DEUTERA', '15:00', '15:50', 78),
(11, 'AS7896', 'NAXOS', 'SITEIA', 'DEUTERA', '16:00', '16:50', 89),
(12, 'AS147896325', 'KWS', 'IKARIA', 'PEMPTI', '3:00', '4:05', 43);

-- --------------------------------------------------------

--
-- Table structure for table `routeexc`
--

CREATE TABLE `routeexc` (
  `id` int(11) NOT NULL,
  `rcode` varchar(45) NOT NULL,
  `date` varchar(45) NOT NULL,
  `p1` int(11) NOT NULL,
  `p2` int(11) NOT NULL,
  `ar1` int(11) NOT NULL,
  `ar2` int(11) NOT NULL,
  `ar3` int(11) NOT NULL,
  `ar4` int(11) NOT NULL,
  `max` varchar(45) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `routeexc`
--

INSERT INTO `routeexc` (`id`, `rcode`, `date`, `p1`, `p2`, `ar1`, `ar2`, `ar3`, `ar4`, `max`) VALUES
(16, 'AS1020', '13/12/2016', 22, 23, 18, 19, 28, 29, '50'),
(17, 'AS789654', '13/12/2016', 22, 25, 18, 19, 28, 29, '47'),
(18, 'AS7896', '13/12/2016', 22, 23, 18, 19, 28, 29, '44');

-- --------------------------------------------------------

--
-- Table structure for table `tickets`
--

CREATE TABLE `tickets` (
  `id` int(11) NOT NULL,
  `customerid` int(11) NOT NULL,
  `excrouteid` int(11) NOT NULL,
  `username` varchar(45) NOT NULL,
  `online` int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `tickets`
--

INSERT INTO `tickets` (`id`, `customerid`, `excrouteid`, `username`, `online`) VALUES
(70, 17, 17, 'nick', 0),
(71, 17, 18, 'nick', 0),
(72, 17, 17, 'nick', 0),
(73, 17, 17, 'nick', 0);

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `id` int(11) NOT NULL,
  `username` varchar(45) NOT NULL,
  `password` varchar(45) NOT NULL,
  `rights` varchar(2) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`id`, `username`, `password`, `rights`) VALUES
(41, 'admin', 'epp', '1'),
(43, 'nikos258', 'asd', '0'),
(47, 'stathis', '12345', '2'),
(48, 'nick', '12345', '0'),
(49, 'qw', '12345', '2'),
(50, 'tp4158', '12345', '0'),
(51, 'anna', '12345', '0'),
(52, 'kwstas', '12345', '0'),
(53, 'savvas', '12345', '0'),
(54, 'xrhstos', '12345', '0');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `aerosinodoi`
--
ALTER TABLE `aerosinodoi`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `empid` (`empid`);

--
-- Indexes for table `company`
--
ALTER TABLE `company`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `customers`
--
ALTER TABLE `customers`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `username` (`username`);

--
-- Indexes for table `dioikitiki`
--
ALTER TABLE `dioikitiki`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `empid` (`empid`);

--
-- Indexes for table `employees`
--
ALTER TABLE `employees`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `idnum` (`idnum`);

--
-- Indexes for table `pilotoi`
--
ALTER TABLE `pilotoi`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `empid` (`empid`);

--
-- Indexes for table `route`
--
ALTER TABLE `route`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `rcode` (`rcode`);

--
-- Indexes for table `routeexc`
--
ALTER TABLE `routeexc`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `tickets`
--
ALTER TABLE `tickets`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `username` (`username`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `aerosinodoi`
--
ALTER TABLE `aerosinodoi`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
--
-- AUTO_INCREMENT for table `company`
--
ALTER TABLE `company`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=12;
--
-- AUTO_INCREMENT for table `customers`
--
ALTER TABLE `customers`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=23;
--
-- AUTO_INCREMENT for table `dioikitiki`
--
ALTER TABLE `dioikitiki`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;
--
-- AUTO_INCREMENT for table `employees`
--
ALTER TABLE `employees`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=30;
--
-- AUTO_INCREMENT for table `pilotoi`
--
ALTER TABLE `pilotoi`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;
--
-- AUTO_INCREMENT for table `route`
--
ALTER TABLE `route`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=13;
--
-- AUTO_INCREMENT for table `routeexc`
--
ALTER TABLE `routeexc`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=19;
--
-- AUTO_INCREMENT for table `tickets`
--
ALTER TABLE `tickets`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=74;
--
-- AUTO_INCREMENT for table `users`
--
ALTER TABLE `users`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=55;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
