//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, NSTimer, UIButton, UIColor, UIImage, UIImageView, UILabel, UITextField;
@protocol UITextFieldDelegate;

@interface QPNumericKeyboard : UIView
{
    _Bool _showLetters;
    NSArray *_letters;
    UIColor *_whiteColor;
    UIColor *_grayColor;
    UITextField *_focusedTextField;
    UIButton *_alternativeButton;
    UIButton *_deleteButton;
    UILabel *_alternativeLabel;
    UIImageView *_alternativeImageView;
    NSTimer *_timerForContinuousDelete;
    NSTimer *_timerForStartLongPress;
    NSMutableArray *_numberLabels;
    NSMutableArray *_letterLabels;
    unsigned long long _alternativeKeyType;
    NSString *_alternativeKeyName;
    UIImage *_alternativeKeyImage;
    id <UITextFieldDelegate> _delegate;
    struct CGSize _keySize;
    struct CGSize _keyboardSize;
}

+ (void)resetSharedInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) id <UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isShowLetters) _Bool showLetters; // @synthesize showLetters=_showLetters;
@property(retain, nonatomic) UIImage *alternativeKeyImage; // @synthesize alternativeKeyImage=_alternativeKeyImage;
@property(copy, nonatomic) NSString *alternativeKeyName; // @synthesize alternativeKeyName=_alternativeKeyName;
@property(nonatomic) unsigned long long alternativeKeyType; // @synthesize alternativeKeyType=_alternativeKeyType;
@property(retain, nonatomic) NSMutableArray *letterLabels; // @synthesize letterLabels=_letterLabels;
@property(retain, nonatomic) NSMutableArray *numberLabels; // @synthesize numberLabels=_numberLabels;
@property(retain, nonatomic) NSTimer *timerForStartLongPress; // @synthesize timerForStartLongPress=_timerForStartLongPress;
@property(retain, nonatomic) NSTimer *timerForContinuousDelete; // @synthesize timerForContinuousDelete=_timerForContinuousDelete;
@property(retain, nonatomic) UIImageView *alternativeImageView; // @synthesize alternativeImageView=_alternativeImageView;
@property(retain, nonatomic) UILabel *alternativeLabel; // @synthesize alternativeLabel=_alternativeLabel;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *alternativeButton; // @synthesize alternativeButton=_alternativeButton;
@property(retain, nonatomic) UITextField *focusedTextField; // @synthesize focusedTextField=_focusedTextField;
@property(retain, nonatomic) UIColor *grayColor; // @synthesize grayColor=_grayColor;
@property(retain, nonatomic) UIColor *whiteColor; // @synthesize whiteColor=_whiteColor;
@property(nonatomic) struct CGSize keyboardSize; // @synthesize keyboardSize=_keyboardSize;
@property(nonatomic) struct CGSize keySize; // @synthesize keySize=_keySize;
@property(retain, nonatomic) NSArray *letters; // @synthesize letters=_letters;
- (void).cxx_destruct;
- (_Bool)enableInputClicksWhenVisible;
- (struct _NSRange)getSelectedRenageOfTextField:(id)arg1;
- (void)cancelAllTimers;
- (void)prepareAlternativeKey:(id)arg1;
- (void)doAlternative;
- (void)backspace;
- (void)insertKey:(id)arg1;
- (void)cancelDeleteButtonHighlight;
- (void)startContinuousDelete;
- (void)buttonPressed:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)createButtonAtRow:(long long)arg1 column:(long long)arg2;
- (id)createNumberLabelWithFrame:(struct CGRect)arg1 text:(id)arg2;
- (void)dealloc;
- (id)init;

@end

