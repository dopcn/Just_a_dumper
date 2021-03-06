//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nimbus/NICellObject.h>

@class NSAttributedString, NSMutableString, NSString, OTSProductNoticeAlertViewModel;

@interface OTSProductNoticeAlertViewTVCellObject : NICellObject
{
    _Bool _messageSwitch;
    NSString *_leftTitleStr;
    NSAttributedString *_contentStr;
    NSString *_rightTitleStr;
    NSMutableString *_phoneNumberStr;
    NSString *_errorMessageStr;
    OTSProductNoticeAlertViewModel *_viewModel;
    long long _cellType;
}

@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) OTSProductNoticeAlertViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *errorMessageStr; // @synthesize errorMessageStr=_errorMessageStr;
@property(retain, nonatomic) NSMutableString *phoneNumberStr; // @synthesize phoneNumberStr=_phoneNumberStr;
@property(nonatomic) _Bool messageSwitch; // @synthesize messageSwitch=_messageSwitch;
@property(copy, nonatomic) NSString *rightTitleStr; // @synthesize rightTitleStr=_rightTitleStr;
@property(copy, nonatomic) NSAttributedString *contentStr; // @synthesize contentStr=_contentStr;
@property(copy, nonatomic) NSString *leftTitleStr; // @synthesize leftTitleStr=_leftTitleStr;
- (void).cxx_destruct;
- (Class)cellClass;
- (id)initWithCellType:(long long)arg1 leftTitleStr:(id)arg2 contentStr:(id)arg3 rightTitleStr:(id)arg4 andViewModel:(id)arg5;

@end

