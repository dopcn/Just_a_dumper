//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WPBaseViewController.h"

#import "BasePageItemCellDelegate-Protocol.h"
#import "MessageLoadModelDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LoadingMoreFooterView, MessageDataModel, NSMutableArray, NSString, UITableView;

@interface WPMessagePageViewController : WPBaseViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, BasePageItemCellDelegate, MessageLoadModelDelegate>
{
    _Bool _isRefresh;
    _Bool _isSelectedCelling;
    int _messageState;
    long long _messageType;
    MessageDataModel *_messageLoadModel;
    NSMutableArray *_messagesArray;
    NSString *_userID;
    UITableView *_pageItemTableView;
    LoadingMoreFooterView *_footerView;
}

@property(nonatomic) _Bool isSelectedCelling; // @synthesize isSelectedCelling=_isSelectedCelling;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(retain, nonatomic) LoadingMoreFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *pageItemTableView; // @synthesize pageItemTableView=_pageItemTableView;
@property(nonatomic) int messageState; // @synthesize messageState=_messageState;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSMutableArray *messagesArray; // @synthesize messagesArray=_messagesArray;
@property(retain, nonatomic) MessageDataModel *messageLoadModel; // @synthesize messageLoadModel=_messageLoadModel;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (void)readAllMessage;
- (void)removeAllMessage;
- (void)didUpdateMessageArray:(id)arg1;
- (void)didLoadMessageFailed:(int)arg1 state:(int)arg2 userID:(id)arg3 error:(id)arg4;
- (void)didLoadMessageSuccess:(int)arg1 state:(int)arg2 userID:(id)arg3 messages:(id)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didSelectCellAtIndexPath:(id)arg1 pageItemInfo:(id)arg2 linkInfo:(id)arg3;
- (void)didSelectItemAtIndex:(long long)arg1 indexPath:(id)arg2 userInfo:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)forwardByForwardDataDict:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithMessageType:(long long)arg1;
- (void)setFooterViewText:(id)arg1 loadedText:(id)arg2;
- (void)loadView;
- (void)loadMoreMessages;
- (void)refresh;
- (void)markAllRead;
- (void)confirmDeleteAllMsg;
- (void)deleteAllMsg;
- (void)showMsgAction;
- (void)clickMore;
- (void)login:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

