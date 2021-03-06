//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

@class CCBNPMenuVM, NSString;
@protocol CCBNPMenuVCDelegate;

@interface CCBNPMenuVC : CCBFormViewController
{
    NSString *_menuNumber;
    NSString *_firstNumber;
    NSString *_firstName;
    id <CCBNPMenuVCDelegate> _delegate;
    CCBNPMenuVM *_viewModel;
}

@property(retain, nonatomic) CCBNPMenuVM *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <CCBNPMenuVCDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *firstNumber; // @synthesize firstNumber=_firstNumber;
@property(retain, nonatomic) NSString *menuNumber; // @synthesize menuNumber=_menuNumber;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

