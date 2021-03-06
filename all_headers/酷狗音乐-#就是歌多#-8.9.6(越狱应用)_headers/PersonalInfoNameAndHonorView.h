//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KGThemeButton, KGThemeLabel, NSMutableArray, PersonalInfoEntity;
@protocol PersonalInfoCenterActionDelegate;

@interface PersonalInfoNameAndHonorView : UIView
{
    double _honorX;
    double _honorY;
    double _honorEdge;
    id <PersonalInfoCenterActionDelegate> _delegate;
    KGThemeLabel *_nickNameLabel;
    PersonalInfoEntity *_entity;
    long long _fromSource;
    KGThemeButton *_levelView;
    NSMutableArray *_arHornorViews;
}

@property(retain, nonatomic) NSMutableArray *arHornorViews; // @synthesize arHornorViews=_arHornorViews;
@property(retain, nonatomic) KGThemeButton *levelView; // @synthesize levelView=_levelView;
@property(nonatomic) long long fromSource; // @synthesize fromSource=_fromSource;
@property(retain, nonatomic) PersonalInfoEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) KGThemeLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(nonatomic) __weak id <PersonalInfoCenterActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)levelViewAction:(id)arg1;
- (id)judgeMedal:(id)arg1;
- (id)competitionMedal:(id)arg1;
- (id)cityRank:(id)arg1;
- (id)vipLevel:(long long)arg1;
- (id)starLevel:(long long)arg1;
- (id)richLevel:(long long)arg1;
- (id)vipOrMusicIcon:(id)arg1;
- (id)kugouHaoIcon;
- (id)getGenderImage:(long long)arg1;
- (void)iconAction:(id)arg1;
- (void)addIcon:(id)arg1 withTag:(long long)arg2;
- (void)setEntity:(id)arg1 fromSource:(long long)arg2;
- (void)createView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

