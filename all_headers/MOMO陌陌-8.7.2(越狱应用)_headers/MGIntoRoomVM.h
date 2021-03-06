//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MGRoomOtherDataDelegate-Protocol.h"

@class MGGiftModel, MGIntoUserModel, MGRoomOtherDataGiftView, MGUser, NSString, UIView;
@protocol MGIntoRoomDelegate;

@interface MGIntoRoomVM : NSObject <MGRoomOtherDataDelegate>
{
    _Bool _isRefreshGift;
    _Bool _isLoading;
    _Bool _isSendLoading;
    _Bool _isVideoGift;
    id <MGIntoRoomDelegate> _delegate;
    MGRoomOtherDataGiftView *_otherDataView;
    NSString *_attentionGiftPa;
    NSString *_attentionMomoney_tips;
    NSString *_videoGiftType;
    MGUser *_clickOtherUser;
    MGGiftModel *_clickGiftModel;
    NSString *_societySendGiftId;
    NSString *_societySendToMomoId;
    MGGiftModel *_videoGiftModel;
    UIView *_intoRoomView;
    UIView *_h5View;
    MGIntoUserModel *_selfUser;
    MGIntoUserModel *_otherUser;
}

@property(retain, nonatomic) MGIntoUserModel *otherUser; // @synthesize otherUser=_otherUser;
@property(retain, nonatomic) MGIntoUserModel *selfUser; // @synthesize selfUser=_selfUser;
@property(retain, nonatomic) UIView *h5View; // @synthesize h5View=_h5View;
@property(retain, nonatomic) UIView *intoRoomView; // @synthesize intoRoomView=_intoRoomView;
@property(nonatomic) _Bool isVideoGift; // @synthesize isVideoGift=_isVideoGift;
@property(retain, nonatomic) MGGiftModel *videoGiftModel; // @synthesize videoGiftModel=_videoGiftModel;
@property(copy, nonatomic) NSString *societySendToMomoId; // @synthesize societySendToMomoId=_societySendToMomoId;
@property(copy, nonatomic) NSString *societySendGiftId; // @synthesize societySendGiftId=_societySendGiftId;
@property(retain, nonatomic) MGGiftModel *clickGiftModel; // @synthesize clickGiftModel=_clickGiftModel;
@property(retain, nonatomic) MGUser *clickOtherUser; // @synthesize clickOtherUser=_clickOtherUser;
@property(copy, nonatomic) NSString *videoGiftType; // @synthesize videoGiftType=_videoGiftType;
@property(copy, nonatomic) NSString *attentionMomoney_tips; // @synthesize attentionMomoney_tips=_attentionMomoney_tips;
@property(copy, nonatomic) NSString *attentionGiftPa; // @synthesize attentionGiftPa=_attentionGiftPa;
@property(nonatomic) _Bool isSendLoading; // @synthesize isSendLoading=_isSendLoading;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) MGRoomOtherDataGiftView *otherDataView; // @synthesize otherDataView=_otherDataView;
@property(nonatomic) _Bool isRefreshGift; // @synthesize isRefreshGift=_isRefreshGift;
@property(nonatomic) __weak id <MGIntoRoomDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshFooterView:(id)arg1;
- (void)getVideoGiftsFail:(id)arg1;
- (void)getVideoGiftsErr:(id)arg1;
- (void)getVideoGiftsListOkSelector:(id)arg1;
- (void)getVideoGift:(_Bool)arg1;
- (void)clickRecharge;
- (void)clickSendGift:(id)arg1;
- (void)clickOtherViewRemoveFromSuperView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)judgmentMomoMoney:(id)arg1;
- (void)sendGiftWithToMomoid:(id)arg1 productId:(id)arg2 giftName:(id)arg3 giftType:(long long)arg4 img:(id)arg5 free:(_Bool)arg6 type:(long long)arg7 commonid:(id)arg8;
- (void)sendGiftRequestComplete:(_Bool)arg1;
- (void)sendGiftFailSelector:(id)arg1;
- (void)sendGiftErrSelector:(id)arg1;
- (void)sendGiftOkSelector:(id)arg1;
- (void)sendGift;
- (void)sendVideoGift;
- (void)setUserModel:(id)arg1 other:(id)arg2;
- (void)createVM:(id)arg1;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

