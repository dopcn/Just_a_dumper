//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC11CodoonSport34LineScatterCandleRadarChartDataSet.h"

#import "_TtP11CodoonSport20IScatterChartDataSet_-Protocol.h"

@class UIColor;
@protocol _TtP11CodoonSport14IShapeRenderer_;

@interface _TtC11CodoonSport19ScatterChartDataSet : _TtC11CodoonSport34LineScatterCandleRadarChartDataSet <_TtP11CodoonSport20IScatterChartDataSet_>
{
    // Error parsing type: , name: scatterShapeSize
    // Error parsing type: , name: scatterShapeHoleRadius
    // Error parsing type: , name: scatterShapeHoleColor
    // Error parsing type: , name: shapeRenderer
}

+ (id)rendererForShape:(long long)arg1;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithValues:(id)arg1 label:(id)arg2;
- (id)initWithLabel:(id)arg1;
- (id)init;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, retain) id <_TtP11CodoonSport14IShapeRenderer_> shapeRenderer; // @synthesize shapeRenderer;
- (void)setScatterShape:(long long)arg1;
@property(nonatomic, retain) UIColor *scatterShapeHoleColor; // @synthesize scatterShapeHoleColor;
@property(nonatomic) double scatterShapeHoleRadius; // @synthesize scatterShapeHoleRadius;
@property(nonatomic) double scatterShapeSize; // @synthesize scatterShapeSize;

@end

