//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QZModelObject.h"

@class NSDictionary, QZPPetFile;

@interface QZPEmoticonPackModel : QZModelObject
{
    int _code;
    QZPPetFile *_emoticonPackFile;
    NSDictionary *_fileMD5Dict;
}

@property(retain, nonatomic) NSDictionary *fileMD5Dict; // @synthesize fileMD5Dict=_fileMD5Dict;
@property(retain, nonatomic) QZPPetFile *emoticonPackFile; // @synthesize emoticonPackFile=_emoticonPackFile;
@property(nonatomic) int code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)directoryPath;
- (_Bool)isModelComplete;
- (_Bool)isEqual:(id)arg1;

@end

