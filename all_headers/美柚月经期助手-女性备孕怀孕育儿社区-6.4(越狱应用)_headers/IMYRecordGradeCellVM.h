//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYRecordCellVM.h"

@class NSString, RACCommand, RACReplaySubject, RACSignal;

@interface IMYRecordGradeCellVM : IMYRecordCellVM
{
    NSString *_gradeImageName;
    NSString *_selectedGradeImageName;
    long long _selectedIndex;
    RACCommand *_selectCMD;
    RACReplaySubject *_gradePressedSubject;
    RACSignal *_gradePressedSignal;
}

@property(retain, nonatomic) RACSignal *gradePressedSignal; // @synthesize gradePressedSignal=_gradePressedSignal;
@property(retain, nonatomic) RACReplaySubject *gradePressedSubject; // @synthesize gradePressedSubject=_gradePressedSubject;
@property(retain, nonatomic) RACCommand *selectCMD; // @synthesize selectCMD=_selectCMD;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSString *selectedGradeImageName; // @synthesize selectedGradeImageName=_selectedGradeImageName;
@property(copy, nonatomic) NSString *gradeImageName; // @synthesize gradeImageName=_gradeImageName;
- (void).cxx_destruct;
@property(nonatomic) long long vmType; // @dynamic vmType;
- (id)init;

@end

