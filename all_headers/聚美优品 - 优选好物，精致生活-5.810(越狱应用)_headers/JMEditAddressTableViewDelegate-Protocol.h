//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDelegate-Protocol.h"

@class JMEditAddressDetailCellTextView, JMEditAddressTableView, NSIndexPath, UIButton;

@protocol JMEditAddressTableViewDelegate <UITableViewDelegate>

@optional
- (void)editAddressTableView:(JMEditAddressTableView *)arg1 didClickContactAtIndexPath:(NSIndexPath *)arg2;
- (void)editAddressTableView:(JMEditAddressTableView *)arg1 didClickClearButtonAtIndexPath:(NSIndexPath *)arg2;
- (void)editAddressTableView:(JMEditAddressTableView *)arg1 didChangeDefaultAddress:(_Bool)arg2;
- (void)editAddressTableView:(JMEditAddressTableView *)arg1 didChangeTextView:(JMEditAddressDetailCellTextView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)editAddressTableView:(JMEditAddressTableView *)arg1 didBeginEditingTextView:(JMEditAddressDetailCellTextView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)editAddressTableView:(JMEditAddressTableView *)arg1 didEndEditingTextView:(JMEditAddressDetailCellTextView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)editAddressTableView:(JMEditAddressTableView *)arg1 didTapDeleteButton:(UIButton *)arg2;
- (void)editAddressTableView:(JMEditAddressTableView *)arg1 didTapLocationAtIndexPath:(NSIndexPath *)arg2;
@end

