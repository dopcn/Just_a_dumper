//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DynamicItemViewModel, KTVDynamicCommentCell, KTVDynamicToolBarCell, KTVDynamicView, KTVHomeRankList, KTVInputTextView, KTVMoreCommentCell, KTVNearbyUserCell, KTVOpusModel, KTVTangInfo, KtvDynamicTableCell, NSArray, NSAttributedString, NSString;

@protocol KTVDynamicViewDataSource <NSObject>
- (_Bool)dynamicView:(KTVDynamicView *)arg1 isContactsForDynamicIndex:(long long)arg2;
- (_Bool)dynamicView:(KTVDynamicView *)arg1 isTopForDynamicIndex:(long long)arg2;
- (long long)dynamicView:(KTVDynamicView *)arg1 giftCountForDynamicIndex:(long long)arg2;
- (long long)dynamicView:(KTVDynamicView *)arg1 praiseCountForDynamicIndex:(long long)arg2;
- (double)dynamicView:(KTVDynamicView *)arg1 imageLayoutHeightForDynamicIndex:(long long)arg2;
- (_Bool)dynamicView:(KTVDynamicView *)arg1 isShowLocationOrGiftForDynamicIndex:(long long)arg2;
- (NSString *)dynamicView:(KTVDynamicView *)arg1 opusNameForDynamicIndex:(long long)arg2;
- (_Bool)dynamicView:(KTVDynamicView *)arg1 opusIsPlayingForDynamicIndex:(long long)arg2;
- (void)addQuanjuPlayList:(long long)arg1;
- (KTVOpusModel *)dynamicView:(KTVDynamicView *)arg1 opusModelForDynamicIndex:(long long)arg2;
- (NSString *)dynamicView:(KTVDynamicView *)arg1 opusPlayUrlStringForDynamicIndex:(long long)arg2 compelete:(void (^)(_Bool, NSString *))arg3;
- (NSAttributedString *)dynamicView:(KTVDynamicView *)arg1 commentDescriptionForDynamicIndex:(long long)arg2 andCommentIndex:(long long)arg3;
- (NSAttributedString *)dynamicView:(KTVDynamicView *)arg1 opusOfDynamicDescriptionForIndex:(long long)arg2;
- (NSAttributedString *)dynamicView:(KTVDynamicView *)arg1 dynamicDescriptionForIndex:(long long)arg2;
- (void)dynamicView:(KTVDynamicView *)arg1 configureCommentInputView:(KTVInputTextView *)arg2 forDynamicIndex:(long long)arg3 andCommentIndex:(long long)arg4;
- (_Bool)dynamicView:(KTVDynamicView *)arg1 isCommentForDynamicIndex:(long long)arg2;
- (_Bool)dynamicView:(KTVDynamicView *)arg1 isUploadingForDynamicIndex:(long long)arg2;
- (_Bool)dynamicView:(KTVDynamicView *)arg1 isOpusDeletedForDynamicIndex:(long long)arg2;
- (void)dynamicView:(KTVDynamicView *)arg1 configureUserDynamicCell:(KTVNearbyUserCell *)arg2 forIndex:(long long)arg3;
- (void)dynamicView:(KTVDynamicView *)arg1 configureToolBarCell:(KTVDynamicToolBarCell *)arg2 forDynamicIndex:(long long)arg3;
- (void)dynamicView:(KTVDynamicView *)arg1 configureCommentCell:(KTVDynamicCommentCell *)arg2 forDynamicIndex:(long long)arg3 andCommentIndex:(long long)arg4;
- (void)dynamicView:(KTVDynamicView *)arg1 configureMoreInteractionCell:(KTVMoreCommentCell *)arg2 forDynamicIndex:(long long)arg3;
- (void)dynamicView:(KTVDynamicView *)arg1 configureDynamicCell:(KtvDynamicTableCell *)arg2 forDynamicIndex:(long long)arg3;
- (long long)rTypeOfOpusForDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (long long)typeOfOpusForDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)whetherOrNotTheDynamicIsOpusDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)ifInvitedByMeDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)haveInvitedTapForDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)haveMoreTotalCommentForDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)haveMoreCommentForDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)haveMoreThanOnePageCommentForDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)needShowBottomLine:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)isInvitedByMe:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)userInterActionEnable:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)havePraiserForDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (KTVHomeRankList *)cityRankList:(KTVDynamicView *)arg1;
- (KTVTangInfo *)tangInfo:(KTVDynamicView *)arg1;
- (long long)numberOfCommentOfDynamicComments:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)haveMoreDataDynamicView:(KTVDynamicView *)arg1;
- (long long)numberOfDynamics:(KTVDynamicView *)arg1;
- (DynamicItemViewModel *)getDynamicItemIndex:(long long)arg1;

@optional
- (NSArray *)getOpusInfoList;
- (_Bool)dynamicView:(KTVDynamicView *)arg1 haveLocationNameOrDistanceAtIndex:(long long)arg2;
- (long long)dynamicType:(KTVDynamicView *)arg1;
- (long long)numberOfCommentCount:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
@end

