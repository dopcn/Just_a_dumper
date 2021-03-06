//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModule.h"

@class NSArray, NSString;

@interface NVFeedSelectListModule : NVBaseModule
{
    NSArray *_list;
    NSString *_titleStr;
    NSString *_extdata;
}

@property(retain, nonatomic) NSString *extdata; // @synthesize extdata=_extdata;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (_Bool)isSubListVC:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupModule;

@end

