//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView;
@protocol KTVSearchResultProviderDelegate;

@protocol KTVSearchResultProviderProtocol <NSObject, UITableViewDelegate, UITableViewDataSource>
@property(nonatomic) __weak id <KTVSearchResultProviderDelegate> delegate;
@property(nonatomic) __weak UITableView *tableView;
- (_Bool)shouldReloadTableForSearchString:(NSString *)arg1;

@optional
@property(nonatomic) _Bool isAutoRap;
@end

