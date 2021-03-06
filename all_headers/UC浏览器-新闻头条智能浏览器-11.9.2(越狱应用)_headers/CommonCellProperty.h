//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CommonCellProperty : NSObject
{
    int _iconViewLeftMargin;
    int _iconViewTopMargin;
    int _mainLabelLeftMargin;
    int _mainLabelTopMargin;
    int _mainLabelHeight;
    int _detailLabelLeftMargin;
    int _detailLabelTopMargin;
    int _detailLabelHeight;
    int _accessBtnRightMargin;
    struct CGSize _iconViewSize;
}

+ (id)defaultProperty;
@property(nonatomic) int accessBtnRightMargin; // @synthesize accessBtnRightMargin=_accessBtnRightMargin;
@property(nonatomic) int detailLabelHeight; // @synthesize detailLabelHeight=_detailLabelHeight;
@property(nonatomic) int detailLabelTopMargin; // @synthesize detailLabelTopMargin=_detailLabelTopMargin;
@property(nonatomic) int detailLabelLeftMargin; // @synthesize detailLabelLeftMargin=_detailLabelLeftMargin;
@property(nonatomic) int mainLabelHeight; // @synthesize mainLabelHeight=_mainLabelHeight;
@property(nonatomic) int mainLabelTopMargin; // @synthesize mainLabelTopMargin=_mainLabelTopMargin;
@property(nonatomic) int mainLabelLeftMargin; // @synthesize mainLabelLeftMargin=_mainLabelLeftMargin;
@property(nonatomic) struct CGSize iconViewSize; // @synthesize iconViewSize=_iconViewSize;
@property(nonatomic) int iconViewTopMargin; // @synthesize iconViewTopMargin=_iconViewTopMargin;
@property(nonatomic) int iconViewLeftMargin; // @synthesize iconViewLeftMargin=_iconViewLeftMargin;

@end

