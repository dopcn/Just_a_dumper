//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTHotelMainSectionAdapter.h"

@class CTHotelListCacheBean;

@interface CTHotelNewAudltChildSectionAdapter : CTHotelMainSectionAdapter
{
    CTHotelListCacheBean *_listCacheBean;
}

+ (id)createCell:(id)arg1;
@property(nonatomic) __weak CTHotelListCacheBean *listCacheBean; // @synthesize listCacheBean=_listCacheBean;
- (void).cxx_destruct;
- (id)getPersonChildAttributedText:(id)arg1;
- (void)didCellClick:(id)arg1 with:(id)arg2;
- (double)getCellHeight;
- (double)getCellHeight:(id)arg1;
- (id)getCellView:(id)arg1;

@end

