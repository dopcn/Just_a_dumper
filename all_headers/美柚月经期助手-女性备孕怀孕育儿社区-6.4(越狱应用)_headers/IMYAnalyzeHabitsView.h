//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYAnalyzeHabitsIcon;

@interface IMYAnalyzeHabitsView : UIView
{
    _Bool _hasData;
    IMYAnalyzeHabitsIcon *_breakfast;
    IMYAnalyzeHabitsIcon *_fruit;
    IMYAnalyzeHabitsIcon *_drink;
    IMYAnalyzeHabitsIcon *_sport;
    IMYAnalyzeHabitsIcon *_walk;
    IMYAnalyzeHabitsIcon *_chouchou;
}

+ (id)habitsViewFrom:(id)arg1 to:(id)arg2;
@property(retain, nonatomic) IMYAnalyzeHabitsIcon *chouchou; // @synthesize chouchou=_chouchou;
@property(retain, nonatomic) IMYAnalyzeHabitsIcon *walk; // @synthesize walk=_walk;
@property(retain, nonatomic) IMYAnalyzeHabitsIcon *sport; // @synthesize sport=_sport;
@property(retain, nonatomic) IMYAnalyzeHabitsIcon *drink; // @synthesize drink=_drink;
@property(retain, nonatomic) IMYAnalyzeHabitsIcon *fruit; // @synthesize fruit=_fruit;
@property(retain, nonatomic) IMYAnalyzeHabitsIcon *breakfast; // @synthesize breakfast=_breakfast;
@property(nonatomic) _Bool hasData; // @synthesize hasData=_hasData;
- (void).cxx_destruct;
- (void)reloadDataFrom:(id)arg1 to:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

