//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailASYIModel, AliDetailHotActivityChaoShiModel, NSMutableArray, NSMutableDictionary;

@interface AliDetailHotActivityChaoShiComponent : AliDetailComponent
{
    AliDetailASYIModel *_asyiModel;
    NSMutableDictionary *_params;
    AliDetailHotActivityChaoShiModel *_hotActivityModel;
    NSMutableArray *_itemViews;
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) AliDetailHotActivityChaoShiModel *hotActivityModel; // @synthesize hotActivityModel=_hotActivityModel;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) AliDetailASYIModel *asyiModel; // @synthesize asyiModel=_asyiModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

