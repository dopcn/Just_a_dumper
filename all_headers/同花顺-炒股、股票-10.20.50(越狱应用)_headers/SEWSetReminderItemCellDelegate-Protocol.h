//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SEWSetReminderItemCell, UIButton, UITextField;

@protocol SEWSetReminderItemCellDelegate <NSObject>
- (void)cell:(SEWSetReminderItemCell *)arg1 textFieldDidEndEditing:(UITextField *)arg2 cellType:(NSString *)arg3 leftBtn:(UIButton *)arg4;
- (void)cell:(SEWSetReminderItemCell *)arg1 cellType:(NSString *)arg2 leftBtn:(UIButton *)arg3 textField:(UITextField *)arg4;
- (_Bool)cell:(SEWSetReminderItemCell *)arg1 cellType:(NSString *)arg2 textField:(UITextField *)arg3 shouldChangeCharactersInRange:(struct _NSRange)arg4 replacementString:(NSString *)arg5;
- (void)cell:(SEWSetReminderItemCell *)arg1 cellType:(NSString *)arg2 textFieldDidBeginEditing:(UITextField *)arg3;
@end

