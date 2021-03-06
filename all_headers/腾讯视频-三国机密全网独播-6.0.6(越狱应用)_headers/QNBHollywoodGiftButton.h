//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLUIButton.h"

#import "P_QNBShareConfigDataSource-Protocol.h"
#import "P_QNBShareConfigDelegate-Protocol.h"
#import "QNBHollywoodGiftButtonProtocol-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString, QLJCEMiniProgramInfo, QLMBProgressHUD, QNBHollywoodGiftButtonInfo, QNBHollywoodGiftCheckModel, QNBHollywoodGiftSyncModel, QNBMomentShareItem, QNBMovieItem, UIImage, UIView, UIViewController;
@protocol QNBHollywoodGiftButtonDelegate, QNBPayTicketProtocol;

@interface QNBHollywoodGiftButton : QLUIButton <QNBHollywoodGiftButtonProtocol, P_QNBShareConfigDelegate, P_QNBShareConfigDataSource>
{
    QNBHollywoodGiftCheckModel *_checkModel;
    QNBHollywoodGiftSyncModel *_syncModel;
    int _localVersion;
    UIView *_touchView;
    QLMBProgressHUD *_hudView;
    _Bool _hasClickOpenBtn;
    unsigned long long _actionType;
    _Bool _isPayingVocher;
    QNBHollywoodGiftButtonInfo *_buttonInfo;
    CDUnknownBlockType _clickCompletionBlock;
    id <QNBHollywoodGiftButtonDelegate> _delegate;
    UIView *_tipView;
    id <QNBPayTicketProtocol> _ticketConfig;
}

@property(retain, nonatomic) id <QNBPayTicketProtocol> ticketConfig; // @synthesize ticketConfig=_ticketConfig;
@property(nonatomic) _Bool isPayingVocher; // @synthesize isPayingVocher=_isPayingVocher;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(nonatomic) __weak id <QNBHollywoodGiftButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType clickCompletionBlock; // @synthesize clickCompletionBlock=_clickCompletionBlock;
@property(retain, nonatomic) QNBHollywoodGiftButtonInfo *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
- (void).cxx_destruct;
- (id)giftBtnShareInfo;
@property(readonly, nonatomic) NSDictionary *shareExtendInfo;
@property(readonly, nonatomic) NSString *shareFromPage;
@property(readonly, nonatomic) NSString *shareImageURL;
@property(readonly, nonatomic) NSString *shareSingleTitle;
@property(readonly, nonatomic) NSString *shareTitle;
@property(readonly, nonatomic) NSString *shareID;
- (unsigned long long)actionShouldSupportActionTypeMask:(id)arg1;
- (void)action:(id)arg1 didShareActionFinish:(_Bool)arg2 actionType:(unsigned long long)arg3;
- (_Bool)action:(id)arg1 shouldActionByUser:(unsigned long long)arg2;
- (void)action:(id)arg1 didPressShareButton:(unsigned long long)arg2;
- (void)actionMenuDidDismissFromSuperView:(id)arg1;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)loadData:(id)arg1;
- (void)giftSync;
- (void)giftCheck;
- (id)vocherConfirmMessage;
- (_Bool)isVideoCanBePlayed;
- (void)vocherPayFail;
- (void)vocherPayFinish;
- (void)showVoucherAlert:(unsigned long long)arg1;
- (void)showShareInterface;
- (void)btnClickWithCheck;
- (_Bool)shouldClickWhenBack;
- (void)delayClickCompletion;
- (void)delayShowLoading;
- (void)touchEnable:(_Bool)arg1;
- (void)showHUDWithTip:(_Bool)arg1 tip:(id)arg2 isProgress:(_Bool)arg3 markImg:(id)arg4;
- (void)iconTap;
- (void)btnClick;
- (void)showAlert:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool needShare;
@property(readonly, nonatomic) NSString *shareActionUrl;
@property(readonly, nonatomic) NSString *shareContent;
@property(readonly, nonatomic) NSString *shareContentTail;
@property(readonly, nonatomic) UIViewController *shareController;
@property(readonly, nonatomic) NSString *shareCopyContent;
@property(readonly, nonatomic) unsigned long long shareDataType;
@property(readonly, nonatomic) NSData *shareGifData;
@property(readonly, nonatomic) UIImage *shareImage;
@property(readonly, nonatomic) QLJCEMiniProgramInfo *shareMiniProgramInfo;
@property(readonly, nonatomic) QNBMomentShareItem *shareMomentItem;
@property(readonly, nonatomic) NSArray *sharePictureList;
@property(readonly, nonatomic) unsigned long long sharePlatformMask;
@property(readonly, nonatomic) NSDictionary *shareReportInfo;
@property(readonly, nonatomic) unsigned long long shareStyle;
@property(readonly, nonatomic) NSString *shareSubTitle;
@property(readonly, nonatomic) NSString *shareURL;
@property(readonly, nonatomic) QNBMovieItem *shareVideoInfo;
@property(readonly) Class superclass;

@end

