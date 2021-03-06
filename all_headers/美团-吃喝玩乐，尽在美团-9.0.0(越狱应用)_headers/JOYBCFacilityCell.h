//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseMarginCell.h"

@class NSArray, RACSignal, RACSubject;

@interface JOYBCFacilityCell : GCBaseMarginCell
{
    NSArray *_arrayForBCFacilities;
    RACSignal *_tapSignal;
    NSArray *_itemViewsForFacilities;
    RACSubject *_tapSubject;
}

+ (double)cellHeight:(id)arg1;
+ (struct CGSize)itemSize;
+ (struct CGSize)picSize;
@property(retain, nonatomic) RACSubject *tapSubject; // @synthesize tapSubject=_tapSubject;
@property(retain, nonatomic) NSArray *itemViewsForFacilities; // @synthesize itemViewsForFacilities=_itemViewsForFacilities;
@property(readonly, nonatomic) RACSignal *tapSignal; // @synthesize tapSignal=_tapSignal;
@property(retain, nonatomic) NSArray *arrayForBCFacilities; // @synthesize arrayForBCFacilities=_arrayForBCFacilities;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)tapItemView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 leftCellMarginType:(long long)arg3 rightCellMarginType:(long long)arg4;

@end

