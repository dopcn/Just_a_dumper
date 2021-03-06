//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLTabControl.h"

@class NSMutableDictionary, UITableView;

@interface NLTableTabControl : NLTabControl
{
    _Bool _isHiddenHeaderForDefault;
    UITableView *_tableView;
    NSMutableDictionary *_offsetStore;
}

@property(retain, nonatomic) NSMutableDictionary *offsetStore; // @synthesize offsetStore=_offsetStore;
@property(nonatomic) _Bool isHiddenHeaderForDefault; // @synthesize isHiddenHeaderForDefault=_isHiddenHeaderForDefault;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)resetOffset;
- (void)selectBtn:(id)arg1;
- (id)initWithButtonCountIncludingRightButton:(long long)arg1;
- (id)initWithButtonCount:(long long)arg1 isNonTheme:(_Bool)arg2;
- (id)initWithButtonCount:(long long)arg1;
- (long long)indexFromType:(long long)arg1;
- (id)dataSourceWithIndex:(long long)arg1;
- (void)setDataSource:(id)arg1 withIndex:(long long)arg2;
- (id)dataSources;
- (id)dataSourceDict;
- (void)setDataSourceDict:(id)arg1;

@end

