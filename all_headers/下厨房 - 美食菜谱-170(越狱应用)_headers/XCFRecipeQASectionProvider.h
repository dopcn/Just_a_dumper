//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XCFTableViewSectionProvider.h"

#import "XCFCommonAnswerTableViewCellDelegate-Protocol.h"
#import "XCFCommonQuestionTableViewCellDelegete-Protocol.h"

@class NSArray, NSString, UITableView, XCFRecipeModel;
@protocol XCFRecipeQASectionProviderDelegate;

@interface XCFRecipeQASectionProvider : XCFTableViewSectionProvider <XCFCommonQuestionTableViewCellDelegete, XCFCommonAnswerTableViewCellDelegate>
{
    id <XCFRecipeQASectionProviderDelegate> _delegate;
    XCFRecipeModel *_recipe;
    NSString *_recipeId;
    NSArray *_showCommonQAs;
    UITableView *_table;
    NSString *_footerText;
}

@property(copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
@property(retain, nonatomic) NSArray *showCommonQAs; // @synthesize showCommonQAs=_showCommonQAs;
@property(retain, nonatomic) NSString *recipeId; // @synthesize recipeId=_recipeId;
@property(retain, nonatomic) XCFRecipeModel *recipe; // @synthesize recipe=_recipe;
@property(nonatomic) id <XCFRecipeQASectionProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchAnswerTableViewCell:(id)arg1 deleteButton:(id)arg2;
- (void)touchAnswerTableViewCell:(id)arg1 editButton:(id)arg2;
- (void)touchQuestionTableViewCell:(id)arg1 LikeButton:(id)arg2;
- (void)touchQuestionTableViewCell:(id)arg1 DeleteButton:(id)arg2;
- (void)touchQuestionTableViewCell:(id)arg1 EditButton:(id)arg2;
- (void)touchQuestionTableViewCell:(id)arg1 ReportButton:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithRecipe:(id)arg1 tableView:(id)arg2 showRecipeQAs:(id)arg3 footerText:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

