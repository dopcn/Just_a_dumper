//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol CharactorPadViewDelegate;

@interface HDZB_CharactorPadView : UIView
{
    NSArray *numberArray;
    NSArray *charactorArray;
    _Bool isBigCharactor;
    id <CharactorPadViewDelegate> chararctorPadDelegate;
}

@property(nonatomic) id <CharactorPadViewDelegate> chararctorPadDelegate; // @synthesize chararctorPadDelegate;
- (_Bool)reFreshData;
- (void)backKey:(id)arg1;
- (void)keyNumberPress:(id)arg1;
- (void)keyCharactorPress:(id)arg1;
- (void)changeCharactorState:(id)arg1;
- (void)createCharactorAndFuncButton:(struct CGSize)arg1;
- (void)createNumberButton:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 lightBtnSize:(struct CGSize)arg2;

@end

