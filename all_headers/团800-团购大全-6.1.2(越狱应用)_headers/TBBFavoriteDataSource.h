//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTableViewDataSource.h"

@protocol TBBFavoriteDataSourceDelegate;

@interface TBBFavoriteDataSource : TBTableViewDataSource
{
    id <TBBFavoriteDataSourceDelegate> _delegate;
}

@property __weak id <TBBFavoriteDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (Class)tableView:(id)arg1 cellClassForObject:(id)arg2;

@end

