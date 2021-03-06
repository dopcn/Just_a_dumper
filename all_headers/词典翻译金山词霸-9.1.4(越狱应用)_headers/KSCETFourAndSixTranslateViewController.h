//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSCETFourAndSixBaseViewController.h"

#import "KSExamCETDirectionsCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KSCETFourAndSixTranslateModel, NSDictionary, NSParagraphStyle, NSString, UIButton, UITableView, UIView;

@interface KSCETFourAndSixTranslateViewController : KSCETFourAndSixBaseViewController <UITableViewDelegate, UITableViewDataSource, KSExamCETDirectionsCellDelegate>
{
    _Bool _isDescriptionsHidden;
    UIView *_headView;
    UITableView *_tableView;
    UIButton *_checkAnswerButton;
    NSDictionary *_stringAttributeForContent;
    NSDictionary *_stringAttributeForAnswerContent;
    NSDictionary *_stringAttributeForQuestion;
    NSParagraphStyle *_paragraphStyle;
    NSParagraphStyle *_paragraphStyleForChinese;
    KSCETFourAndSixTranslateModel *_translateModel;
}

@property(retain, nonatomic) KSCETFourAndSixTranslateModel *translateModel; // @synthesize translateModel=_translateModel;
@property(nonatomic) _Bool isDescriptionsHidden; // @synthesize isDescriptionsHidden=_isDescriptionsHidden;
@property(retain, nonatomic) NSParagraphStyle *paragraphStyleForChinese; // @synthesize paragraphStyleForChinese=_paragraphStyleForChinese;
@property(retain, nonatomic) NSParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(retain, nonatomic) NSDictionary *stringAttributeForQuestion; // @synthesize stringAttributeForQuestion=_stringAttributeForQuestion;
@property(retain, nonatomic) NSDictionary *stringAttributeForAnswerContent; // @synthesize stringAttributeForAnswerContent=_stringAttributeForAnswerContent;
@property(retain, nonatomic) NSDictionary *stringAttributeForContent; // @synthesize stringAttributeForContent=_stringAttributeForContent;
@property(nonatomic) __weak UIButton *checkAnswerButton; // @synthesize checkAnswerButton=_checkAnswerButton;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)refreshViewWithModel:(id)arg1;
- (void)checkAnswerButtonClick:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)reloadDirectionsCell:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setTableViewTheme;
- (void)viewDidLoad;
- (void)loadWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

