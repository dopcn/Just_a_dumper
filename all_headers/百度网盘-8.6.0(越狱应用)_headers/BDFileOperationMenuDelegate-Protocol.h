//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BDFileOperationMenu, UIButton;

@protocol BDFileOperationMenuDelegate <NSObject>

@optional
- (void)handleMenuItemClicked:(BDFileOperationMenu *)arg1 operationType:(int)arg2;
- (void)touchDownAtSegmentIndex:(unsigned long long)arg1;
- (void)touchUpInsideSegmentIndex:(unsigned long long)arg1;
- (UIButton *)buttonFor:(BDFileOperationMenu *)arg1 atIndex:(unsigned long long)arg2 withFileModel:(id)arg3;
- (long long)countButtonFor:(BDFileOperationMenu *)arg1 withFileMeta:(id)arg2;
@end

