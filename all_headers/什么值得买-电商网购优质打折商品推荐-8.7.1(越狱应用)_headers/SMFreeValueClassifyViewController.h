//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NavigationBarViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, SMFreeValueContactButton, UITableView;

@interface SMFreeValueClassifyViewController : NavigationBarViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableDictionary *_initialDict;
    NSString *_contactType;
    NSString *_contactValue;
    CDUnknownBlockType _valueChanged;
    UITableView *_tableView;
    NSMutableArray *_dataArr;
    NSMutableArray *_valuesArr;
    NSMutableArray *_displayTexts;
    long long _selectedRow;
    SMFreeValueContactButton *_selectedButton;
}

@property(retain, nonatomic) SMFreeValueContactButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) NSMutableArray *displayTexts; // @synthesize displayTexts=_displayTexts;
@property(retain, nonatomic) NSMutableArray *valuesArr; // @synthesize valuesArr=_valuesArr;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType valueChanged; // @synthesize valueChanged=_valueChanged;
@property(retain, nonatomic) NSString *contactValue; // @synthesize contactValue=_contactValue;
@property(retain, nonatomic) NSString *contactType; // @synthesize contactType=_contactType;
@property(nonatomic) __weak NSMutableDictionary *initialDict; // @synthesize initialDict=_initialDict;
- (void).cxx_destruct;
- (id)contactTypeByName:(id)arg1;
- (_Bool)allValusIsEmpty;
- (void)gotToUpdate:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)optionButtonDidClick:(id)arg1;
- (void)rightButtonClick;
- (void)leftButtonClick;
- (void)initNormalNavigationBarView;
- (id)getContactType;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

