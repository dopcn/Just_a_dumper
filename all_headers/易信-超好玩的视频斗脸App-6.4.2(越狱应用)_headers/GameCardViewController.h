//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseCardViewController.h"

@class NSString, UIView;

@interface GameCardViewController : BaseCardViewController
{
    NSString *_accountUser;
    UIView *_gameFooterView;
}

@property(retain, nonatomic) UIView *gameFooterView; // @synthesize gameFooterView=_gameFooterView;
- (void).cxx_destruct;
- (id)urlForBlurImage;
- (_Bool)isMe;
- (void)onGamePlayerChanged:(id)arg1;
- (void)onUInfoChanged:(id)arg1;
- (void)addListenEvents;
- (void)showUserCard;
- (void)clearMessages;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)initTableFooterView;
- (void)initTableHeaderView;
- (void)updateTableInfoList;
- (id)initWithUserID:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

