//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WanderShopStoryArticalModel.h"

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface WanderShopPicModel : WanderShopStoryArticalModel <NSCoding>
{
    double _imgTextHeightInDetailVC;
    NSDictionary *_attributedDic;
    _Bool _isVideoPicInfo;
    _Bool _isVideo;
    _Bool _isMainPicInfo;
    _Bool _isPlaceholder;
    NSString *_source;
    NSString *_coverURL;
    NSString *_imgURL;
    NSString *_wareId;
    NSString *_type;
    NSString *_picSize;
    NSString *_imgText;
    NSString *_videoVU;
    double _imgHeightURL;
    double _imgWidthURL;
    double _imgHeightReal;
    double _imgWidthReal;
    NSString *_wareName;
    NSString *_warePrice;
    double _imgWidthInDetailVCOfURL;
    double _imgHeightInDetailVCOfURL;
    double _imgWidthInDetailVCOfReal;
    double _imgHeightInDetailVCOfReal;
}

@property(nonatomic) double imgHeightInDetailVCOfReal; // @synthesize imgHeightInDetailVCOfReal=_imgHeightInDetailVCOfReal;
@property(nonatomic) double imgWidthInDetailVCOfReal; // @synthesize imgWidthInDetailVCOfReal=_imgWidthInDetailVCOfReal;
@property(nonatomic) double imgHeightInDetailVCOfURL; // @synthesize imgHeightInDetailVCOfURL=_imgHeightInDetailVCOfURL;
@property(nonatomic) double imgWidthInDetailVCOfURL; // @synthesize imgWidthInDetailVCOfURL=_imgWidthInDetailVCOfURL;
@property(copy, nonatomic) NSString *warePrice; // @synthesize warePrice=_warePrice;
@property(copy, nonatomic) NSString *wareName; // @synthesize wareName=_wareName;
@property(nonatomic) double imgWidthReal; // @synthesize imgWidthReal=_imgWidthReal;
@property(nonatomic) double imgHeightReal; // @synthesize imgHeightReal=_imgHeightReal;
@property(nonatomic) double imgWidthURL; // @synthesize imgWidthURL=_imgWidthURL;
@property(nonatomic) double imgHeightURL; // @synthesize imgHeightURL=_imgHeightURL;
@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(nonatomic) _Bool isMainPicInfo; // @synthesize isMainPicInfo=_isMainPicInfo;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) _Bool isVideoPicInfo; // @synthesize isVideoPicInfo=_isVideoPicInfo;
@property(copy, nonatomic) NSString *videoVU; // @synthesize videoVU=_videoVU;
@property(copy, nonatomic) NSString *imgText; // @synthesize imgText=_imgText;
@property(copy, nonatomic) NSString *picSize; // @synthesize picSize=_picSize;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
@property(copy, nonatomic) NSString *imgURL; // @synthesize imgURL=_imgURL;
@property(copy, nonatomic) NSString *coverURL; // @synthesize coverURL=_coverURL;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSDictionary *attributedDic;
- (id)attributedContent;
- (struct CGSize)imgSizeWithString:(id)arg1;
- (void)setDataWithDic:(id)arg1;
@property(readonly, nonatomic) double imgTextHeightInDetailVC;
- (double)calCellHeightInDetailVC;
- (id)init;

@end

