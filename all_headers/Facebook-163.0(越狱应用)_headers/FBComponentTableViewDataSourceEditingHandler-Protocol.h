//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBComponentTableViewDataSource, NSIndexPath, NSString;
@protocol NSObject;

@protocol FBComponentTableViewDataSourceEditingHandler <NSObject>
- (NSString *)dataSource:(FBComponentTableViewDataSource *)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)dataSource:(FBComponentTableViewDataSource *)arg1 editingStyleForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)dataSource:(FBComponentTableViewDataSource *)arg1 commitEditingStyle:(long long)arg2 forRowWithModel:(id <NSObject>)arg3;
- (_Bool)dataSource:(FBComponentTableViewDataSource *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2;
@end

