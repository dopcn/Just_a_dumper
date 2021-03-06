//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BBAMessageSettingsViewController.h"

@class BBAMessageIndividual, BBAMessageMembersGridCell, BBAMessageMembersGridCellControl, UITableViewCell, UIView;

@interface BBAMessageChatSettingsViewController : BBAMessageSettingsViewController
{
    BBAMessageIndividual *_individual;
    BBAMessageMembersGridCell *_membersCell;
    BBAMessageMembersGridCellControl *_createGroupButton;
    UITableViewCell *_disturbSettingCell;
    UITableViewCell *_clearHistoryCell;
    UIView *_followButtonView;
}

- (void).cxx_destruct;
- (id)followButtonView;
- (id)clearHistoryCell;
- (id)createDisturbSettingCell;
- (id)disturbSettingCellWithCreate:(_Bool)arg1;
- (id)createGroupButton;
- (void)updateMembersCell;
- (id)membersCell;
- (void)reloadData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithIndividual:(id)arg1;
- (void)dealloc;

@end

