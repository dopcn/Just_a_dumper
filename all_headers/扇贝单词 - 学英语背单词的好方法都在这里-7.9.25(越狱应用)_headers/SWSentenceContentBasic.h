//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SWTagListViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SBExample, SWExampleAudioButton, SWSentenceTagListView, UITextView;

__attribute__((visibility("hidden")))
@interface SWSentenceContentBasic : UIView <SWTagListViewDelegate>
{
    SWExampleAudioButton *_audioButton;
    SBExample *_example;
    UITextView *_anotationTextView;
    SWSentenceTagListView *_tagList;
    NSMutableArray *_tagStirngArray;
    long long _currentWord;
}

@property(nonatomic) long long currentWord; // @synthesize currentWord=_currentWord;
@property(retain, nonatomic) NSMutableArray *tagStirngArray; // @synthesize tagStirngArray=_tagStirngArray;
@property(retain, nonatomic) SWSentenceTagListView *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) UITextView *anotationTextView; // @synthesize anotationTextView=_anotationTextView;
@property(retain, nonatomic) SBExample *example; // @synthesize example=_example;
@property(retain, nonatomic) SWExampleAudioButton *audioButton; // @synthesize audioButton=_audioButton;
- (void).cxx_destruct;
- (void)didSelectTagAtIndex:(unsigned long long)arg1;
- (void)showSuccess;
- (void)showWordInTextFieldWithRange:(unsigned long long)arg1;
- (id)shuffleArray:(id)arg1;
- (void)layoutAudioButton;
- (void)layoutSubviews;
- (void)configSubviews;
- (id)initWithSentenceExample:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

