//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LVClassProtocal-Protocol.h"
#import "LVProtocal-Protocol.h"

@class LuaViewCore, NSData, NSString;

@interface LVDownloader : NSObject <LVProtocal, LVClassProtocal>
{
    LuaViewCore *_lv_luaviewCore;
    struct _LVUserDataInfo *_lv_userData;
    id _luaObjRetainKey;
    NSData *_data;
    id _strongSelf;
}

+ (int)lvClassDefine:(struct lua_State *)arg1 globalName:(id)arg2;
@property(retain, nonatomic) id strongSelf; // @synthesize strongSelf=_strongSelf;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) id luaObjRetainKey; // @synthesize luaObjRetainKey=_luaObjRetainKey;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LuaViewCore *lv_luaviewCore; // @synthesize lv_luaviewCore=_lv_luaviewCore;
- (void).cxx_destruct;
- (void)didFileLoaded;
- (id)init:(struct lua_State *)arg1;
- (id)lv_nativeObject;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

