//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LMJDropdownMenu;

@protocol LMJDropdownMenuDelegate <NSObject>

@optional
- (void)dropdownMenu:(LMJDropdownMenu *)arg1 selectedCellNumber:(long long)arg2;
- (void)dropdownMenuDidHidden:(LMJDropdownMenu *)arg1;
- (void)dropdownMenuWillHidden:(LMJDropdownMenu *)arg1;
- (void)dropdownMenuDidShow:(LMJDropdownMenu *)arg1;
- (void)dropdownMenuWillShow:(LMJDropdownMenu *)arg1;
@end

