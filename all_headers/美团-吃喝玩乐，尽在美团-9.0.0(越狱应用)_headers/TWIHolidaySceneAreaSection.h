//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TWIBaseTableViewCell, TWIHolidaySceneAreaGoodsCell;

@interface TWIHolidaySceneAreaSection : NSObject
{
    _Bool _hasTitle;
    _Bool _hasSegment;
    _Bool _hasGoods;
    TWIBaseTableViewCell *_titleCell;
    TWIBaseTableViewCell *_segmentCell;
    TWIHolidaySceneAreaGoodsCell *_goodsCell;
}

@property(retain, nonatomic) TWIHolidaySceneAreaGoodsCell *goodsCell; // @synthesize goodsCell=_goodsCell;
@property(retain, nonatomic) TWIBaseTableViewCell *segmentCell; // @synthesize segmentCell=_segmentCell;
@property(retain, nonatomic) TWIBaseTableViewCell *titleCell; // @synthesize titleCell=_titleCell;
@property(nonatomic) _Bool hasGoods; // @synthesize hasGoods=_hasGoods;
@property(nonatomic) _Bool hasSegment; // @synthesize hasSegment=_hasSegment;
@property(nonatomic) _Bool hasTitle; // @synthesize hasTitle=_hasTitle;
- (void).cxx_destruct;
- (id)init;

@end

