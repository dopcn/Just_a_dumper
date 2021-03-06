//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBDetailBaseViewTemplate.h"

@class CALayer, NSDictionary, NSIndexPath, UILabel;

@interface JobAddressView : WBDetailBaseViewTemplate
{
    NSDictionary *_infoDic;
    CALayer *_lineLayer;
    NSIndexPath *_currentIndexPath;
    UILabel *_contentLabel;
    UILabel *_titleLabel;
}

+ (double)computeHeightWithCellData:(id)arg1;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) NSDictionary *infoDic; // @synthesize infoDic=_infoDic;
- (void).cxx_destruct;
- (void)checkLineLayerFrameWithData:(id)arg1;
- (void)configWidgetViewData:(id)arg1 AtIndexPath:(id)arg2;
- (void)prepareWidgetViewWithData:(id)arg1 withCurrentIndexPath:(id)arg2;
- (void)awakeFromNib;
- (void)dealloc;

@end

