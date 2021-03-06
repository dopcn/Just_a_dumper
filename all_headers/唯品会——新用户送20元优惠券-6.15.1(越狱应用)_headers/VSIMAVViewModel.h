//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, VSIMChatTableViewModel, VSIMHostTableViewModel, VSVideoShoppingMerchandisesViewModel;

@interface VSIMAVViewModel : NSObject
{
    _Bool _defaultFullscreen;
    NSString *_groupID;
    NSArray *_tableViewModelArray;
    VSVideoShoppingMerchandisesViewModel *_merchandisesViewModel;
    VSIMHostTableViewModel *_hostTableViewModel;
    VSIMChatTableViewModel *_chatTableViewModel;
}

@property(nonatomic) __weak VSIMChatTableViewModel *chatTableViewModel; // @synthesize chatTableViewModel=_chatTableViewModel;
@property(nonatomic) __weak VSIMHostTableViewModel *hostTableViewModel; // @synthesize hostTableViewModel=_hostTableViewModel;
@property(nonatomic) __weak VSVideoShoppingMerchandisesViewModel *merchandisesViewModel; // @synthesize merchandisesViewModel=_merchandisesViewModel;
@property(retain, nonatomic) NSArray *tableViewModelArray; // @synthesize tableViewModelArray=_tableViewModelArray;
@property(nonatomic) _Bool defaultFullscreen; // @synthesize defaultFullscreen=_defaultFullscreen;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;
- (void)sendLikeMessage;
- (void)sendMessageWithText:(id)arg1;
- (void)registerUpdateRepliedMessageAction:(CDUnknownBlockType)arg1;
- (void)registerUpdateUnreadMessageCountAction:(CDUnknownBlockType)arg1;
- (void)willBecomeInactive;
- (void)startup;
- (id)convertWarehouseInfo:(id)arg1;
- (id)initWithGroupID:(id)arg1;

@end

