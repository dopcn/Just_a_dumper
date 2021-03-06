//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, UITableView;

@interface FontViewController : DUIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_table;
    NSArray *_fontFamilyNames;
    NSArray *_fontFamilyNamesIndexesKeys;
    NSDictionary *_fontFamilyNamesIndexesDictionary;
}

@property(copy, nonatomic) NSDictionary *fontFamilyNamesIndexesDictionary; // @synthesize fontFamilyNamesIndexesDictionary=_fontFamilyNamesIndexesDictionary;
@property(copy, nonatomic) NSArray *fontFamilyNamesIndexesKeys; // @synthesize fontFamilyNamesIndexesKeys=_fontFamilyNamesIndexesKeys;
@property(copy, nonatomic) NSArray *fontFamilyNames; // @synthesize fontFamilyNames=_fontFamilyNames;
@property(nonatomic) __weak UITableView *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

