//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class KWUserDetailItem, NSString, UIButton, UITextField;
@protocol KWUserDetailRenameCellDelegate;

@interface KWUserDetailRenameCell : UITableViewCell <UITextFieldDelegate>
{
    UITextField *_textField;
    UIButton *_cancelButton;
    KWUserDetailItem *_userDetailItem;
    id <KWUserDetailRenameCellDelegate> _delegate;
}

@property(nonatomic) __weak id <KWUserDetailRenameCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) KWUserDetailItem *userDetailItem; // @synthesize userDetailItem=_userDetailItem;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)onCancelButtonClick:(id)arg1;
- (void)cancelRename;
- (void)finishRename;
- (void)beginRename;
- (void)configureForUserDetailItem:(id)arg1;
- (void)defaultConfigure;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

