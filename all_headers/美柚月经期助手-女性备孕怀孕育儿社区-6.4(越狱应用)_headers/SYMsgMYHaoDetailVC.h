//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SYChatViewController.h"

#import "IMYREasyInputViewDelegate-Protocol.h"
#import "SYTaskThumCellProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XHMessageTableViewCellDelegate-Protocol.h"

@class NSString;

@interface SYMsgMYHaoDetailVC : SYChatViewController <UITableViewDelegate, UITableViewDataSource, XHMessageTableViewCellDelegate, IMYREasyInputViewDelegate, SYTaskThumCellProtocol>
{
    unsigned long long _fromType;
}

+ (double)thumCellHeightWithModel:(id)arg1;
@property(nonatomic) unsigned long long fromType; // @synthesize fromType=_fromType;
- (void)jumpToPersonalHomePage:(id)arg1;
- (void)didTapAvatarViewWithUserId:(long long)arg1;
- (void)didSelectedAvatorOnMessage:(id)arg1 atIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)allowSendPic;
- (_Bool)allowSendFace;
- (unsigned long long)targetUserType;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

