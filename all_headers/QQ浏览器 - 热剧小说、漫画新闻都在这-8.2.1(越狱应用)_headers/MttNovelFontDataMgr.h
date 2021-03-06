//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MttNovelFontTaskSaveDelegate-Protocol.h"

@class MttNovelFontData, NSMutableArray, NSString;
@protocol MttNovelFontTaskDelegate;

@interface MttNovelFontDataMgr : NSObject <MttNovelFontTaskSaveDelegate>
{
    NSObject *lockObj;
    _Bool _bWifiBeforeBG;
    NSMutableArray *_fontArray;
    id <MttNovelFontTaskDelegate> _fontTaskDelegate;
    NSMutableArray *_defaultArray;
    unsigned long long _fontState;
    MttNovelFontData *_registFontData;
}

+ (id)sharedInstance;
@property(retain, nonatomic) MttNovelFontData *registFontData; // @synthesize registFontData=_registFontData;
@property(nonatomic) unsigned long long fontState; // @synthesize fontState=_fontState;
@property(nonatomic) _Bool bWifiBeforeBG; // @synthesize bWifiBeforeBG=_bWifiBeforeBG;
@property(retain, nonatomic) NSMutableArray *defaultArray; // @synthesize defaultArray=_defaultArray;
@property(nonatomic) __weak id <MttNovelFontTaskDelegate> fontTaskDelegate; // @synthesize fontTaskDelegate=_fontTaskDelegate;
@property(retain) NSMutableArray *fontArray; // @synthesize fontArray=_fontArray;
- (void).cxx_destruct;
- (void)autoDownloadSpecialFontIfNeed;
- (id)getFontTaskDelegate;
- (void)switchFontDataDelegate:(id)arg1;
- (_Bool)CoreTextCanLayoutCorrectly:(struct __CTFont *)arg1 fontName:(id)arg2;
- (_Bool)RegisterFont:(id)arg1 withReturnFont:(_Bool)arg2;
- (void)UnRegisterFonts:(id)arg1;
- (struct __CTFont *)createWithName:(id)arg1 size:(double)arg2 withReturnFont:(_Bool)arg3 defaultFontName:(id)arg4;
- (struct __CTFont *)CTFontCreateWithName:(id)arg1 size:(double)arg2 withReturnFont:(_Bool)arg3;
- (struct __CTFont *)CTTitleFontCreateWithName:(id)arg1 size:(double)arg2 withReturnFont:(_Bool)arg3;
- (void)SwitchFont:(id)arg1 newFont:(id)arg2;
- (id)GetFontData:(id)arg1;
- (void)enterForeGround;
- (void)enterBackGround;
- (void)UpdateFontList;
- (void)initDefaultFontArray;
- (void)SaveFontTask;
- (void)saveFontList:(id)arg1;
- (id)getSavedFontList;
- (id)getFontFolderPath;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

