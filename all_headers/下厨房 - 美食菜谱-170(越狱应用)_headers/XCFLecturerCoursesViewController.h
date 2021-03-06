//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XCFTableViewController.h"

@class NSMutableArray, NSString, XCFCursor;

@interface XCFLecturerCoursesViewController : XCFTableViewController
{
    NSString *_lecturerID;
    NSString *_userID;
    NSMutableArray *_courses;
    XCFCursor *_cursor;
}

+ (_Bool)canHandleNextUrl:(id)arg1;
+ (void)handleUrl:(id)arg1;
+ (_Bool)canHandleUrl:(id)arg1;
@property(retain, nonatomic) XCFCursor *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSMutableArray *courses; // @synthesize courses=_courses;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *lecturerID; // @synthesize lecturerID=_lecturerID;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewFrameDidSetForTheFirstTime;
- (void)startLoadingMoreAction;
- (void)viewDidLoad;
- (id)initWithUserID:(id)arg1;
- (id)initWithLecturerID:(id)arg1;

@end

