//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBEpubKeyFileXMLBasicParser.h"

@class NBEpubCatalogMaker, NBEpubResources, NSMutableArray, NSString;
@protocol NBEpubSAXParserProtocol;

@interface NBEpubNCXXMLBasicParser : NBEpubKeyFileXMLBasicParser
{
    NBEpubResources *_ncxContent;
    id <NBEpubSAXParserProtocol> _xmlParser;
    NSString *_parsingTagName;
    NBEpubCatalogMaker *_catalogMaker;
    NSMutableArray *_innerNcxContent;
    NSMutableArray *_parsingCatalogs;
    long long _currentLevel;
}

@property(nonatomic) long long currentLevel; // @synthesize currentLevel=_currentLevel;
@property(retain, nonatomic) NSMutableArray *parsingCatalogs; // @synthesize parsingCatalogs=_parsingCatalogs;
@property(retain, nonatomic) NSMutableArray *innerNcxContent; // @synthesize innerNcxContent=_innerNcxContent;
@property(retain, nonatomic) NBEpubCatalogMaker *catalogMaker; // @synthesize catalogMaker=_catalogMaker;
@property(copy, nonatomic) NSString *parsingTagName; // @synthesize parsingTagName=_parsingTagName;
@property(retain, nonatomic) id <NBEpubSAXParserProtocol> xmlParser; // @synthesize xmlParser=_xmlParser;
@property(retain, nonatomic) NBEpubResources *ncxContent; // @synthesize ncxContent=_ncxContent;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;
- (void)parserDidEndDocument:(id)arg1;
- (void)decreaseCatalogLevel;
- (void)increaseCatalogLevel;
- (void)startParsingNCXFile;
- (void)checkToReleaseSaxParser;
- (_Bool)processCatalogItemResource:(id)arg1;
- (id)ncxFilePathForEpubBook:(id)arg1;
- (_Bool)validateEpubBook:(id)arg1;
- (void)cancelParsing;
- (void)parseEpubFileForBook:(id)arg1;
- (void)dealloc;
- (id)init;

@end

