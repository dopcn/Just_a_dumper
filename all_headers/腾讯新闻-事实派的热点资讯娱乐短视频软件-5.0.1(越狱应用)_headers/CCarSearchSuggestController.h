//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CCarDataLoaderDelegate-Protocol.h"
#import "QNWebviewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CCarDataLoader, NSMutableArray, NSString, UITableView;
@protocol CCarSearchSuggestDelegate;

@interface CCarSearchSuggestController : UIViewController <QNWebviewCellDelegate, UITableViewDataSource, UITableViewDelegate, CCarDataLoaderDelegate>
{
    id <CCarSearchSuggestDelegate> _searchSuggestDelegate;
    CCarDataLoader *_dataLoader;
    UITableView *_tableView;
    NSMutableArray *_suggestResultArray;
    NSString *_keyWord;
}

@property(copy, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(retain, nonatomic) NSMutableArray *suggestResultArray; // @synthesize suggestResultArray=_suggestResultArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CCarDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <CCarSearchSuggestDelegate> searchSuggestDelegate; // @synthesize searchSuggestDelegate=_searchSuggestDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)parseJSONResponse:(id)arg1;
- (void)dataLoaderDownLoadDataFailed:(id)arg1;
- (void)dataLoaderDownLoadDataComplete:(id)arg1;
- (id)getRequestURL;
- (void)fetchSuggestInformationWithStr:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)validateThemeStyle;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

