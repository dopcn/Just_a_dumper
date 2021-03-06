//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, QLAppSkinObj;

@interface QLAppSkinsManager : NSObject
{
    QLAppSkinObj *_skinObj;
    NSMutableArray *_arySkins;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableArray *arySkins; // @synthesize arySkins=_arySkins;
@property(retain) QLAppSkinObj *skinObj; // @synthesize skinObj=_skinObj;
- (id)getImageWithName:(id)arg1;
- (void)selectSkinWithIndex:(long long)arg1;
- (void)loadSkins;
- (id)colorWithString:(id)arg1;
- (id)init;

@end

