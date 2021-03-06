//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBListBaseCell.h"

@class NSMutableDictionary, UIButton, UIImageView, WBListTemplateAdvertiseModel;

@interface WBListCellTemplateAdvertise : WBListBaseCell
{
    UIImageView *_adImgView;
    UIButton *_closeBtn;
    CDUnknownBlockType _doJumpToTargetCallBack;
    NSMutableDictionary *_hasWriteLogDict;
    WBListTemplateAdvertiseModel *_adInfoModel;
}

+ (double)computeHeightWithCellData:(id)arg1;
@property(retain, nonatomic) WBListTemplateAdvertiseModel *adInfoModel; // @synthesize adInfoModel=_adInfoModel;
@property(retain, nonatomic) NSMutableDictionary *hasWriteLogDict; // @synthesize hasWriteLogDict=_hasWriteLogDict;
@property(copy, nonatomic) CDUnknownBlockType doJumpToTargetCallBack; // @synthesize doJumpToTargetCallBack=_doJumpToTargetCallBack;
@property(nonatomic) __weak UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak UIImageView *adImgView; // @synthesize adImgView=_adImgView;
- (void).cxx_destruct;
- (void)getHouseListViewController:(id)arg1;
- (void)doJumpToTarget:(id)arg1;
- (void)doWriteAdLogWithActionName:(id)arg1;
- (void)doClickCloseBtn:(id)arg1;
- (void)configAdImgViewWithServerUrl:(id)arg1;
- (void)configCellViewData:(id)arg1 AtIndexPath:(id)arg2;
- (void)prepareCellViewWithData:(id)arg1 withCurrentIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)getHouseListViewController:(id)arg1;

@end

