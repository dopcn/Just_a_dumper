//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EQMoreTotal, EQSoundInfo, NSString;

@interface ViperCellModel : NSObject
{
    _Bool _isSelected;
    NSString *_titleStr;
    NSString *_detailStr;
    NSString *_secondDetailStr;
    EQSoundInfo *_userCountInfo;
    EQMoreTotal *_moreTotal;
    unsigned long long _viperEffetType;
}

@property(nonatomic) unsigned long long viperEffetType; // @synthesize viperEffetType=_viperEffetType;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) EQMoreTotal *moreTotal; // @synthesize moreTotal=_moreTotal;
@property(retain, nonatomic) EQSoundInfo *userCountInfo; // @synthesize userCountInfo=_userCountInfo;
@property(copy, nonatomic) NSString *secondDetailStr; // @synthesize secondDetailStr=_secondDetailStr;
@property(copy, nonatomic) NSString *detailStr; // @synthesize detailStr=_detailStr;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
- (void).cxx_destruct;

@end

