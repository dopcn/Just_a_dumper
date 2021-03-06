//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@interface UITableView (YYAdd)
- (void)clearSelectedRowsAnimated:(_Bool)arg1;
- (void)reloadSection:(unsigned long long)arg1 withRowAnimation:(long long)arg2;
- (void)deleteSection:(unsigned long long)arg1 withRowAnimation:(long long)arg2;
- (void)insertSection:(unsigned long long)arg1 withRowAnimation:(long long)arg2;
- (void)deleteRow:(unsigned long long)arg1 inSection:(unsigned long long)arg2 withRowAnimation:(long long)arg3;
- (void)deleteRowAtIndexPath:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadRow:(unsigned long long)arg1 inSection:(unsigned long long)arg2 withRowAnimation:(long long)arg3;
- (void)reloadRowAtIndexPath:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertRow:(unsigned long long)arg1 inSection:(unsigned long long)arg2 withRowAnimation:(long long)arg3;
- (void)insertRowAtIndexPath:(id)arg1 withRowAnimation:(long long)arg2;
- (void)scrollToRow:(unsigned long long)arg1 inSection:(unsigned long long)arg2 atScrollPosition:(long long)arg3 animated:(_Bool)arg4;
- (void)updateWithBlock:(CDUnknownBlockType)arg1;
@end

