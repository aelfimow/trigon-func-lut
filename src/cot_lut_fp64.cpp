#include "types.h"
#include "cot_lut_fp64.h"
#include "degree_to_rad.h"
#include <cmath>
#include <numbers>

namespace cot_lut_fp64
{
    using namespace degree_to_rad;

    fp64 cot(fp64 x)
    {
        return (cos(x) / sin(x));
    }

    lut_func_t const lut[MAX_LUT_ELEM]
    {
        []() -> fp64 { return cot(to_rad(0U)); },
        []() -> fp64 { return cot(to_rad(1U)); },
        []() -> fp64 { return cot(to_rad(2U)); },
        []() -> fp64 { return cot(to_rad(3U)); },
        []() -> fp64 { return cot(to_rad(4U)); },
        []() -> fp64 { return cot(to_rad(5U)); },
        []() -> fp64 { return cot(to_rad(6U)); },
        []() -> fp64 { return cot(to_rad(7U)); },
        []() -> fp64 { return cot(to_rad(8U)); },
        []() -> fp64 { return cot(to_rad(9U)); },
        []() -> fp64 { return cot(to_rad(10U)); },
        []() -> fp64 { return cot(to_rad(11U)); },
        []() -> fp64 { return cot(to_rad(12U)); },
        []() -> fp64 { return cot(to_rad(13U)); },
        []() -> fp64 { return cot(to_rad(14U)); },
        []() -> fp64 { return cot(to_rad(15U)); },
        []() -> fp64 { return cot(to_rad(16U)); },
        []() -> fp64 { return cot(to_rad(17U)); },
        []() -> fp64 { return cot(to_rad(18U)); },
        []() -> fp64 { return cot(to_rad(19U)); },
        []() -> fp64 { return cot(to_rad(20U)); },
        []() -> fp64 { return cot(to_rad(21U)); },
        []() -> fp64 { return cot(to_rad(22U)); },
        []() -> fp64 { return cot(to_rad(23U)); },
        []() -> fp64 { return cot(to_rad(24U)); },
        []() -> fp64 { return cot(to_rad(25U)); },
        []() -> fp64 { return cot(to_rad(26U)); },
        []() -> fp64 { return cot(to_rad(27U)); },
        []() -> fp64 { return cot(to_rad(28U)); },
        []() -> fp64 { return cot(to_rad(29U)); },
        []() -> fp64 { return cot(to_rad(30U)); },
        []() -> fp64 { return cot(to_rad(31U)); },
        []() -> fp64 { return cot(to_rad(32U)); },
        []() -> fp64 { return cot(to_rad(33U)); },
        []() -> fp64 { return cot(to_rad(34U)); },
        []() -> fp64 { return cot(to_rad(35U)); },
        []() -> fp64 { return cot(to_rad(36U)); },
        []() -> fp64 { return cot(to_rad(37U)); },
        []() -> fp64 { return cot(to_rad(38U)); },
        []() -> fp64 { return cot(to_rad(39U)); },
        []() -> fp64 { return cot(to_rad(40U)); },
        []() -> fp64 { return cot(to_rad(41U)); },
        []() -> fp64 { return cot(to_rad(42U)); },
        []() -> fp64 { return cot(to_rad(43U)); },
        []() -> fp64 { return cot(to_rad(44U)); },
        []() -> fp64 { return cot(to_rad(45U)); },
        []() -> fp64 { return cot(to_rad(46U)); },
        []() -> fp64 { return cot(to_rad(47U)); },
        []() -> fp64 { return cot(to_rad(48U)); },
        []() -> fp64 { return cot(to_rad(49U)); },
        []() -> fp64 { return cot(to_rad(50U)); },
        []() -> fp64 { return cot(to_rad(51U)); },
        []() -> fp64 { return cot(to_rad(52U)); },
        []() -> fp64 { return cot(to_rad(53U)); },
        []() -> fp64 { return cot(to_rad(54U)); },
        []() -> fp64 { return cot(to_rad(55U)); },
        []() -> fp64 { return cot(to_rad(56U)); },
        []() -> fp64 { return cot(to_rad(57U)); },
        []() -> fp64 { return cot(to_rad(58U)); },
        []() -> fp64 { return cot(to_rad(59U)); },
        []() -> fp64 { return cot(to_rad(60U)); },
        []() -> fp64 { return cot(to_rad(61U)); },
        []() -> fp64 { return cot(to_rad(62U)); },
        []() -> fp64 { return cot(to_rad(63U)); },
        []() -> fp64 { return cot(to_rad(64U)); },
        []() -> fp64 { return cot(to_rad(65U)); },
        []() -> fp64 { return cot(to_rad(66U)); },
        []() -> fp64 { return cot(to_rad(67U)); },
        []() -> fp64 { return cot(to_rad(68U)); },
        []() -> fp64 { return cot(to_rad(69U)); },
        []() -> fp64 { return cot(to_rad(70U)); },
        []() -> fp64 { return cot(to_rad(71U)); },
        []() -> fp64 { return cot(to_rad(72U)); },
        []() -> fp64 { return cot(to_rad(73U)); },
        []() -> fp64 { return cot(to_rad(74U)); },
        []() -> fp64 { return cot(to_rad(75U)); },
        []() -> fp64 { return cot(to_rad(76U)); },
        []() -> fp64 { return cot(to_rad(77U)); },
        []() -> fp64 { return cot(to_rad(78U)); },
        []() -> fp64 { return cot(to_rad(79U)); },
        []() -> fp64 { return cot(to_rad(80U)); },
        []() -> fp64 { return cot(to_rad(81U)); },
        []() -> fp64 { return cot(to_rad(82U)); },
        []() -> fp64 { return cot(to_rad(83U)); },
        []() -> fp64 { return cot(to_rad(84U)); },
        []() -> fp64 { return cot(to_rad(85U)); },
        []() -> fp64 { return cot(to_rad(86U)); },
        []() -> fp64 { return cot(to_rad(87U)); },
        []() -> fp64 { return cot(to_rad(88U)); },
        []() -> fp64 { return cot(to_rad(89U)); },
        []() -> fp64 { return cot(to_rad(90U)); },
        []() -> fp64 { return cot(to_rad(91U)); },
        []() -> fp64 { return cot(to_rad(92U)); },
        []() -> fp64 { return cot(to_rad(93U)); },
        []() -> fp64 { return cot(to_rad(94U)); },
        []() -> fp64 { return cot(to_rad(95U)); },
        []() -> fp64 { return cot(to_rad(96U)); },
        []() -> fp64 { return cot(to_rad(97U)); },
        []() -> fp64 { return cot(to_rad(98U)); },
        []() -> fp64 { return cot(to_rad(99U)); },
        []() -> fp64 { return cot(to_rad(100U)); },
        []() -> fp64 { return cot(to_rad(101U)); },
        []() -> fp64 { return cot(to_rad(102U)); },
        []() -> fp64 { return cot(to_rad(103U)); },
        []() -> fp64 { return cot(to_rad(104U)); },
        []() -> fp64 { return cot(to_rad(105U)); },
        []() -> fp64 { return cot(to_rad(106U)); },
        []() -> fp64 { return cot(to_rad(107U)); },
        []() -> fp64 { return cot(to_rad(108U)); },
        []() -> fp64 { return cot(to_rad(109U)); },
        []() -> fp64 { return cot(to_rad(110U)); },
        []() -> fp64 { return cot(to_rad(111U)); },
        []() -> fp64 { return cot(to_rad(112U)); },
        []() -> fp64 { return cot(to_rad(113U)); },
        []() -> fp64 { return cot(to_rad(114U)); },
        []() -> fp64 { return cot(to_rad(115U)); },
        []() -> fp64 { return cot(to_rad(116U)); },
        []() -> fp64 { return cot(to_rad(117U)); },
        []() -> fp64 { return cot(to_rad(118U)); },
        []() -> fp64 { return cot(to_rad(119U)); },
        []() -> fp64 { return cot(to_rad(120U)); },
        []() -> fp64 { return cot(to_rad(121U)); },
        []() -> fp64 { return cot(to_rad(122U)); },
        []() -> fp64 { return cot(to_rad(123U)); },
        []() -> fp64 { return cot(to_rad(124U)); },
        []() -> fp64 { return cot(to_rad(125U)); },
        []() -> fp64 { return cot(to_rad(126U)); },
        []() -> fp64 { return cot(to_rad(127U)); },
        []() -> fp64 { return cot(to_rad(128U)); },
        []() -> fp64 { return cot(to_rad(129U)); },
        []() -> fp64 { return cot(to_rad(130U)); },
        []() -> fp64 { return cot(to_rad(131U)); },
        []() -> fp64 { return cot(to_rad(132U)); },
        []() -> fp64 { return cot(to_rad(133U)); },
        []() -> fp64 { return cot(to_rad(134U)); },
        []() -> fp64 { return cot(to_rad(135U)); },
        []() -> fp64 { return cot(to_rad(136U)); },
        []() -> fp64 { return cot(to_rad(137U)); },
        []() -> fp64 { return cot(to_rad(138U)); },
        []() -> fp64 { return cot(to_rad(139U)); },
        []() -> fp64 { return cot(to_rad(140U)); },
        []() -> fp64 { return cot(to_rad(141U)); },
        []() -> fp64 { return cot(to_rad(142U)); },
        []() -> fp64 { return cot(to_rad(143U)); },
        []() -> fp64 { return cot(to_rad(144U)); },
        []() -> fp64 { return cot(to_rad(145U)); },
        []() -> fp64 { return cot(to_rad(146U)); },
        []() -> fp64 { return cot(to_rad(147U)); },
        []() -> fp64 { return cot(to_rad(148U)); },
        []() -> fp64 { return cot(to_rad(149U)); },
        []() -> fp64 { return cot(to_rad(150U)); },
        []() -> fp64 { return cot(to_rad(151U)); },
        []() -> fp64 { return cot(to_rad(152U)); },
        []() -> fp64 { return cot(to_rad(153U)); },
        []() -> fp64 { return cot(to_rad(154U)); },
        []() -> fp64 { return cot(to_rad(155U)); },
        []() -> fp64 { return cot(to_rad(156U)); },
        []() -> fp64 { return cot(to_rad(157U)); },
        []() -> fp64 { return cot(to_rad(158U)); },
        []() -> fp64 { return cot(to_rad(159U)); },
        []() -> fp64 { return cot(to_rad(160U)); },
        []() -> fp64 { return cot(to_rad(161U)); },
        []() -> fp64 { return cot(to_rad(162U)); },
        []() -> fp64 { return cot(to_rad(163U)); },
        []() -> fp64 { return cot(to_rad(164U)); },
        []() -> fp64 { return cot(to_rad(165U)); },
        []() -> fp64 { return cot(to_rad(166U)); },
        []() -> fp64 { return cot(to_rad(167U)); },
        []() -> fp64 { return cot(to_rad(168U)); },
        []() -> fp64 { return cot(to_rad(169U)); },
        []() -> fp64 { return cot(to_rad(170U)); },
        []() -> fp64 { return cot(to_rad(171U)); },
        []() -> fp64 { return cot(to_rad(172U)); },
        []() -> fp64 { return cot(to_rad(173U)); },
        []() -> fp64 { return cot(to_rad(174U)); },
        []() -> fp64 { return cot(to_rad(175U)); },
        []() -> fp64 { return cot(to_rad(176U)); },
        []() -> fp64 { return cot(to_rad(177U)); },
        []() -> fp64 { return cot(to_rad(178U)); },
        []() -> fp64 { return cot(to_rad(179U)); },
        []() -> fp64 { return cot(to_rad(180U)); },
        []() -> fp64 { return cot(to_rad(181U)); },
        []() -> fp64 { return cot(to_rad(182U)); },
        []() -> fp64 { return cot(to_rad(183U)); },
        []() -> fp64 { return cot(to_rad(184U)); },
        []() -> fp64 { return cot(to_rad(185U)); },
        []() -> fp64 { return cot(to_rad(186U)); },
        []() -> fp64 { return cot(to_rad(187U)); },
        []() -> fp64 { return cot(to_rad(188U)); },
        []() -> fp64 { return cot(to_rad(189U)); },
        []() -> fp64 { return cot(to_rad(190U)); },
        []() -> fp64 { return cot(to_rad(191U)); },
        []() -> fp64 { return cot(to_rad(192U)); },
        []() -> fp64 { return cot(to_rad(193U)); },
        []() -> fp64 { return cot(to_rad(194U)); },
        []() -> fp64 { return cot(to_rad(195U)); },
        []() -> fp64 { return cot(to_rad(196U)); },
        []() -> fp64 { return cot(to_rad(197U)); },
        []() -> fp64 { return cot(to_rad(198U)); },
        []() -> fp64 { return cot(to_rad(199U)); },
        []() -> fp64 { return cot(to_rad(200U)); },
        []() -> fp64 { return cot(to_rad(201U)); },
        []() -> fp64 { return cot(to_rad(202U)); },
        []() -> fp64 { return cot(to_rad(203U)); },
        []() -> fp64 { return cot(to_rad(204U)); },
        []() -> fp64 { return cot(to_rad(205U)); },
        []() -> fp64 { return cot(to_rad(206U)); },
        []() -> fp64 { return cot(to_rad(207U)); },
        []() -> fp64 { return cot(to_rad(208U)); },
        []() -> fp64 { return cot(to_rad(209U)); },
        []() -> fp64 { return cot(to_rad(210U)); },
        []() -> fp64 { return cot(to_rad(211U)); },
        []() -> fp64 { return cot(to_rad(212U)); },
        []() -> fp64 { return cot(to_rad(213U)); },
        []() -> fp64 { return cot(to_rad(214U)); },
        []() -> fp64 { return cot(to_rad(215U)); },
        []() -> fp64 { return cot(to_rad(216U)); },
        []() -> fp64 { return cot(to_rad(217U)); },
        []() -> fp64 { return cot(to_rad(218U)); },
        []() -> fp64 { return cot(to_rad(219U)); },
        []() -> fp64 { return cot(to_rad(220U)); },
        []() -> fp64 { return cot(to_rad(221U)); },
        []() -> fp64 { return cot(to_rad(222U)); },
        []() -> fp64 { return cot(to_rad(223U)); },
        []() -> fp64 { return cot(to_rad(224U)); },
        []() -> fp64 { return cot(to_rad(225U)); },
        []() -> fp64 { return cot(to_rad(226U)); },
        []() -> fp64 { return cot(to_rad(227U)); },
        []() -> fp64 { return cot(to_rad(228U)); },
        []() -> fp64 { return cot(to_rad(229U)); },
        []() -> fp64 { return cot(to_rad(230U)); },
        []() -> fp64 { return cot(to_rad(231U)); },
        []() -> fp64 { return cot(to_rad(232U)); },
        []() -> fp64 { return cot(to_rad(233U)); },
        []() -> fp64 { return cot(to_rad(234U)); },
        []() -> fp64 { return cot(to_rad(235U)); },
        []() -> fp64 { return cot(to_rad(236U)); },
        []() -> fp64 { return cot(to_rad(237U)); },
        []() -> fp64 { return cot(to_rad(238U)); },
        []() -> fp64 { return cot(to_rad(239U)); },
        []() -> fp64 { return cot(to_rad(240U)); },
        []() -> fp64 { return cot(to_rad(241U)); },
        []() -> fp64 { return cot(to_rad(242U)); },
        []() -> fp64 { return cot(to_rad(243U)); },
        []() -> fp64 { return cot(to_rad(244U)); },
        []() -> fp64 { return cot(to_rad(245U)); },
        []() -> fp64 { return cot(to_rad(246U)); },
        []() -> fp64 { return cot(to_rad(247U)); },
        []() -> fp64 { return cot(to_rad(248U)); },
        []() -> fp64 { return cot(to_rad(249U)); },
        []() -> fp64 { return cot(to_rad(250U)); },
        []() -> fp64 { return cot(to_rad(251U)); },
        []() -> fp64 { return cot(to_rad(252U)); },
        []() -> fp64 { return cot(to_rad(253U)); },
        []() -> fp64 { return cot(to_rad(254U)); },
        []() -> fp64 { return cot(to_rad(255U)); },
        []() -> fp64 { return cot(to_rad(256U)); },
        []() -> fp64 { return cot(to_rad(257U)); },
        []() -> fp64 { return cot(to_rad(258U)); },
        []() -> fp64 { return cot(to_rad(259U)); },
        []() -> fp64 { return cot(to_rad(260U)); },
        []() -> fp64 { return cot(to_rad(261U)); },
        []() -> fp64 { return cot(to_rad(262U)); },
        []() -> fp64 { return cot(to_rad(263U)); },
        []() -> fp64 { return cot(to_rad(264U)); },
        []() -> fp64 { return cot(to_rad(265U)); },
        []() -> fp64 { return cot(to_rad(266U)); },
        []() -> fp64 { return cot(to_rad(267U)); },
        []() -> fp64 { return cot(to_rad(268U)); },
        []() -> fp64 { return cot(to_rad(269U)); },
        []() -> fp64 { return cot(to_rad(270U)); },
        []() -> fp64 { return cot(to_rad(271U)); },
        []() -> fp64 { return cot(to_rad(272U)); },
        []() -> fp64 { return cot(to_rad(273U)); },
        []() -> fp64 { return cot(to_rad(274U)); },
        []() -> fp64 { return cot(to_rad(275U)); },
        []() -> fp64 { return cot(to_rad(276U)); },
        []() -> fp64 { return cot(to_rad(277U)); },
        []() -> fp64 { return cot(to_rad(278U)); },
        []() -> fp64 { return cot(to_rad(279U)); },
        []() -> fp64 { return cot(to_rad(280U)); },
        []() -> fp64 { return cot(to_rad(281U)); },
        []() -> fp64 { return cot(to_rad(282U)); },
        []() -> fp64 { return cot(to_rad(283U)); },
        []() -> fp64 { return cot(to_rad(284U)); },
        []() -> fp64 { return cot(to_rad(285U)); },
        []() -> fp64 { return cot(to_rad(286U)); },
        []() -> fp64 { return cot(to_rad(287U)); },
        []() -> fp64 { return cot(to_rad(288U)); },
        []() -> fp64 { return cot(to_rad(289U)); },
        []() -> fp64 { return cot(to_rad(290U)); },
        []() -> fp64 { return cot(to_rad(291U)); },
        []() -> fp64 { return cot(to_rad(292U)); },
        []() -> fp64 { return cot(to_rad(293U)); },
        []() -> fp64 { return cot(to_rad(294U)); },
        []() -> fp64 { return cot(to_rad(295U)); },
        []() -> fp64 { return cot(to_rad(296U)); },
        []() -> fp64 { return cot(to_rad(297U)); },
        []() -> fp64 { return cot(to_rad(298U)); },
        []() -> fp64 { return cot(to_rad(299U)); },
        []() -> fp64 { return cot(to_rad(300U)); },
        []() -> fp64 { return cot(to_rad(301U)); },
        []() -> fp64 { return cot(to_rad(302U)); },
        []() -> fp64 { return cot(to_rad(303U)); },
        []() -> fp64 { return cot(to_rad(304U)); },
        []() -> fp64 { return cot(to_rad(305U)); },
        []() -> fp64 { return cot(to_rad(306U)); },
        []() -> fp64 { return cot(to_rad(307U)); },
        []() -> fp64 { return cot(to_rad(308U)); },
        []() -> fp64 { return cot(to_rad(309U)); },
        []() -> fp64 { return cot(to_rad(310U)); },
        []() -> fp64 { return cot(to_rad(311U)); },
        []() -> fp64 { return cot(to_rad(312U)); },
        []() -> fp64 { return cot(to_rad(313U)); },
        []() -> fp64 { return cot(to_rad(314U)); },
        []() -> fp64 { return cot(to_rad(315U)); },
        []() -> fp64 { return cot(to_rad(316U)); },
        []() -> fp64 { return cot(to_rad(317U)); },
        []() -> fp64 { return cot(to_rad(318U)); },
        []() -> fp64 { return cot(to_rad(319U)); },
        []() -> fp64 { return cot(to_rad(320U)); },
        []() -> fp64 { return cot(to_rad(321U)); },
        []() -> fp64 { return cot(to_rad(322U)); },
        []() -> fp64 { return cot(to_rad(323U)); },
        []() -> fp64 { return cot(to_rad(324U)); },
        []() -> fp64 { return cot(to_rad(325U)); },
        []() -> fp64 { return cot(to_rad(326U)); },
        []() -> fp64 { return cot(to_rad(327U)); },
        []() -> fp64 { return cot(to_rad(328U)); },
        []() -> fp64 { return cot(to_rad(329U)); },
        []() -> fp64 { return cot(to_rad(330U)); },
        []() -> fp64 { return cot(to_rad(331U)); },
        []() -> fp64 { return cot(to_rad(332U)); },
        []() -> fp64 { return cot(to_rad(333U)); },
        []() -> fp64 { return cot(to_rad(334U)); },
        []() -> fp64 { return cot(to_rad(335U)); },
        []() -> fp64 { return cot(to_rad(336U)); },
        []() -> fp64 { return cot(to_rad(337U)); },
        []() -> fp64 { return cot(to_rad(338U)); },
        []() -> fp64 { return cot(to_rad(339U)); },
        []() -> fp64 { return cot(to_rad(340U)); },
        []() -> fp64 { return cot(to_rad(341U)); },
        []() -> fp64 { return cot(to_rad(342U)); },
        []() -> fp64 { return cot(to_rad(343U)); },
        []() -> fp64 { return cot(to_rad(344U)); },
        []() -> fp64 { return cot(to_rad(345U)); },
        []() -> fp64 { return cot(to_rad(346U)); },
        []() -> fp64 { return cot(to_rad(347U)); },
        []() -> fp64 { return cot(to_rad(348U)); },
        []() -> fp64 { return cot(to_rad(349U)); },
        []() -> fp64 { return cot(to_rad(350U)); },
        []() -> fp64 { return cot(to_rad(351U)); },
        []() -> fp64 { return cot(to_rad(352U)); },
        []() -> fp64 { return cot(to_rad(353U)); },
        []() -> fp64 { return cot(to_rad(354U)); },
        []() -> fp64 { return cot(to_rad(355U)); },
        []() -> fp64 { return cot(to_rad(356U)); },
        []() -> fp64 { return cot(to_rad(357U)); },
        []() -> fp64 { return cot(to_rad(358U)); },
        []() -> fp64 { return cot(to_rad(359U)); },
        []() -> fp64 { return cot(to_rad(360U)); }
    };
}
