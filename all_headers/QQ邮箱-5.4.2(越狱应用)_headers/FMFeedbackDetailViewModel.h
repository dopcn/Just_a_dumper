//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMFeedbackViewModel.h"

@class FMComposeMailUI, FMContact, NSArray, NSDictionary, NSMutableArray, NSString;

@interface FMFeedbackDetailViewModel : FMFeedbackViewModel
{
    _Bool _isDetailViewModel;
    _Bool _mutilSelect;
    NSArray *_problemList;
    NSMutableArray *_attachList;
    NSArray *_contacts;
    FMContact *_selectContact;
    unsigned long long _selectedAttachIndex;
    NSString *_detailDescription;
    NSMutableArray *_selectedArray;
    NSString *_placeholder;
    NSString *_hint;
    NSDictionary *_sceneDic;
    FMComposeMailUI *_mailUI;
}

@property(retain, nonatomic) FMComposeMailUI *mailUI; // @synthesize mailUI=_mailUI;
@property(retain, nonatomic) NSDictionary *sceneDic; // @synthesize sceneDic=_sceneDic;
@property(nonatomic) _Bool mutilSelect; // @synthesize mutilSelect=_mutilSelect;
@property(retain, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSMutableArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(retain, nonatomic) NSString *detailDescription; // @synthesize detailDescription=_detailDescription;
@property(nonatomic) unsigned long long selectedAttachIndex; // @synthesize selectedAttachIndex=_selectedAttachIndex;
@property(retain, nonatomic) FMContact *selectContact; // @synthesize selectContact=_selectContact;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) NSMutableArray *attachList; // @synthesize attachList=_attachList;
@property(retain, nonatomic) NSArray *problemList; // @synthesize problemList=_problemList;
@property(readonly, nonatomic) _Bool isDetailViewModel; // @synthesize isDetailViewModel=_isDetailViewModel;
- (void).cxx_destruct;
- (id)genMailContent;
- (id)genMailSubject;
- (id)genImageComposeFilesByMailUI:(id)arg1;
- (id)genLogComposeFileByMailUI:(id)arg1;
@property(readonly, nonatomic) _Bool detailDescriptionNecessary;
- (id)title;
- (id)getComposeMailUI;
- (void)removeAttachAtIndex:(unsigned long long)arg1;
- (void)addAttachsByAttachList:(id)arg1;
- (void)setProblemSelected:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)isProblemSelectedAtIndex:(unsigned long long)arg1;
- (id)problemDescribeAtIndex:(unsigned long long)arg1;
- (id)initWithProblemDic:(id)arg1;

@end

